#ifndef ZOMBI_HPP
#define ZOMBI_HPP

#include <iomanip>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string zombieName);
    ~Zombie();
    void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif