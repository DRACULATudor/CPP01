#include "Harl.hpp"

const std::string Harl::RESET = "\033[0m";
const std::string Harl::RED = "\033[31m";
const std::string Harl::GREEN = "\033[32m";
const std::string Harl::YELLOW = "\033[33m";
const std::string Harl::BLUE = "\033[34m";

Harl::Harl() //assigning to which privat memb functoin the array to point to
{
    actions[0] = &Harl::debug;
    actions[1] = &Harl::info;
    actions[2] = &Harl::warning;
    actions[3] = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug()
{
    std::cout << BLUE << "[DEBUG]" << std::endl
              << "I am allways extra happy when I don't have pineaple on my pizza, wow so much peperoni.\nI LOVE IT!\n"
              << std::endl;
}

void Harl::info()
{
    std::cout << GREEN << "[INFO]" << std::endl
              << "I am really loving this pizza, but why does every single bite have a tropical taste?\nSomething feels wrong.....\n" << std::endl;
}

void Harl::warning()
{
    std::cout << YELLOW << "[WARNING]" << std::endl
              << "HOW IS THIS POSSIBLE !?\nWhy am I seeing yellow fruity pieces on my pizza !!!\nWHAT IS THAT !!????........\n"
              << std::endl;
}

void Harl::error()
{
    std::cout << RED << "[ERROR]" << std::endl
              << "THIS IS PINEAPLE !!!\nCOMPLETELY UNACCEPTABLE !!!\nMY LAWYERS WILL CONTACT YOU, HOW COULD YOU ???!!!\n"
              << std::endl;
}

void Harl::complain(int num)
{
    switch (num)
    {
    case 1:
        debug();
        info();
        warning();
        error();
        break;
    case 2:
        info();
        warning();
        error();
        break;
    case 3:
        warning();
        error();
        break;
    case 4:
        error();
        break;
    default:
        std::cout << RESET << "No pizza selected....." << std::endl
            << YELLOW  << "no Pineaple\n" << RED << "wrong\n" << BLUE <<"-_-  "<< GREEN <<" -_-\n"
              << std::endl;
        break;
    }
}
