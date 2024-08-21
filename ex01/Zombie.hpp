#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <iomanip>

class Zombie
{
private:
    std::string name;
public:
    void announce(void);
    Zombie(std::string zombieName);
    ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
