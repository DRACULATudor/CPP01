#include "Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie("Jhon");
    zombie->announce();
    delete zombie;
    randomChump("Jessica");
    return(0);
}