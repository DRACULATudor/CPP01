#include "Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie("Foo");
    zombie->announce();
    delete zombie;
    randomChump("Jessica");
    return(0);
}