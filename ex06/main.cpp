#include "Harl.hpp"
#include <unistd.h>

int main(int argc, char *argv[])
{
    //test 1 uncomment sleep for relistic robot like given text
    if (argc != 2)
        std::cout << "Invalid number of arguments !" << std::endl;
    else
    {
        std::string level = argv[1];
        int num = 0;
        Harl harli;
        if (level == "DEBUG")
            num = 1;
        else if (level == "INFO")
            num = 2;
        else if (level == "WARNING")
            num = 3;
        else if (level == "ERROR")
            num = 4;
        harli.complain( num);
    }
    
    return(0);
}