#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName):name(zombieName)
{
}

Zombie::~Zombie()
{
    std::cout<< "Deconstructor called for "<< name << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}
