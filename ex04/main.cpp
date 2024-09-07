#include "sed.hpp"

void replace(std::string file, std::string toreplace, std::string replacemnt)
{
    std::ifstream filename(file); //instream for converint to (input)file contents
    if (!filename)
    {
        std::cout << "Error oppening file\n";
        return;
    }

    std::ostringstream buff; //used for reading entier line into buffer so than I can 
    buff << filename.rdbuf();   // convert the contents into string 
    std::string buffer = buff.str();
    filename.close();

    int pos_char;
    while ((pos_char = buffer.find(toreplace, pos_char)) != std::string::npos) //npos = if condition fails(if nothing to replace found)
    {
        buffer.replace(pos_char, toreplace.length(), replacemnt);
        pos_char += replacemnt.length();
    }
    std::ofstream outfile(file + ".replacement"); // converting to (output)file contents
    if (!outfile)
    {
        std::cout << "Error getting contents of file" << std::endl;
        return;
    }
    
    outfile << buffer;
    outfile.close();
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        std::cout << "Invalid number of arguments !" << std::endl;
    else
    {
        if (argv[1] != NULL)
        {
            std::string filenam = argv[1];
            if (argv[2] != NULL && argv[3] != NULL)
            {
                std::string toreplace = argv[2];
                std::string replacement = argv[3];
                replace(filenam, toreplace, replacement);
                return (0);
            }
            else
            {
                std::cout << "Neither of the strings is allowed to be null !" << std::endl;
                return(0);
            }
        }
        else
            std::cout << "Invalid number of arguments !" << std::endl;
        
    }
    return (0);
}
