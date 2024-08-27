#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName):name(zombieName)
{
}

Zombie::~Zombie()
{
    std::cout<< name << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
