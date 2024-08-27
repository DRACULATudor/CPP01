#include <iomanip>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string is: " << &str << std::endl
              << "The memory address of the stringPTR is: " << &stringPTR << std::endl
              << "The memory address of the stringREF is: " << &stringREF << std::endl
              << std::endl;

    std::cout << "The value of variable(str) is: " << str << std::endl
              << "The value pointed by stringPTR is: " << *stringPTR << std::endl
              << "The value pointed by stringREF is: " << stringREF << std::endl;
}