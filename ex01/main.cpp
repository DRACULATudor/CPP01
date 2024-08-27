#include "Zombie.hpp"

int main()
{
    std::string names[5] = {"Alex", "Bob", "Charlie", "Dave", "Alex"};
    for (int i = 0; i < 5; i++)
    {
        Zombie *horde = zombieHorde(5, names[i]);
        delete[] horde;
    }

    return(0);
}