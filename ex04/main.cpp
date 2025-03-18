#include "sed.hpp"

void replaceme(std::string file, std::string toreplace, std::string replacemnt)
{
    std::ifstream filename(file.c_str()); //instream for converint to (input)file contents
    if (!filename)
    {
        std::cout << "Error oppening file\n";
        return;
    }
    std::ostringstream buff; //used for reading entier line into buffer so than I can 
    buff << filename.rdbuf();   // convert the contents into string 
    std::string buffer = buff.str();
    filename.close();

    if (buffer.empty())
    {
        std::cerr << "Error empty file" << std::endl;
        return;
    }
    if (toreplace.empty())
    {
        std::cerr << "String to be replaced can't be empty !" << std::endl;
        return;
    }

    std::string result;    
    size_t pos_char = 0;
    size_t found;
    
    while ((found = buffer.find(toreplace, pos_char)) != std::string::npos) //npos = if condition fails(if nothing to replace found)
    {
        result.append(buffer, pos_char, found - pos_char);// append part before the match
        result.append(replacemnt); //append the replacement
        pos_char = found + toreplace.length();
    }
    result.append(buffer, pos_char, buffer.length() - pos_char); //append rest of string
    std::ofstream outfile((file + ".replacement").c_str()); // converting to (output)file contents
    if (!outfile)
    {
        std::cout << "Error getting contents of file" << std::endl;
        return;
    }
    outfile << result;
    outfile.close();
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Invalid number of arguments!" << std::endl;
        return 1;
    }
    if (argv[1] != NULL && argv[2] != NULL && argv[3] != NULL)
    {
        std::string filename = argv[1];
        std::string toreplace = argv[2];
        std::string replacement = argv[3];
        // std::cout << "Replacing '" << toreplace << "' with '" << replacement << "' in file '" << filename << "'" << std::endl;
        replaceme(filename, toreplace, replacement);
        return 0;
    }
    else
    {
        std::cerr << "Neither of the strings is allowed to be null! || Invalid number of arguments!" << std::endl;
        return 1;
    }
}