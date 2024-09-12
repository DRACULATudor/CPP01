#pragma once

#include <iomanip>
#include <iostream>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    void (Harl::*actions[4])(); //An array of pointers which point to the pvt memb functions
   // Color constants
    static const std::string RESET;
    static const std::string RED;
    static const std::string GREEN;
    static const std::string YELLOW;
    static const std::string BLUE; //colours //rem to comm be4 eval // !
public:
    Harl();
    ~Harl();
    void complain(std::string level);
};

//syntax of ember function pointer is [return_type (ClassName::*pointer_name)(parameter_types)];