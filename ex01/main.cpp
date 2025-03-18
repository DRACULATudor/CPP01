#include "Zombie.hpp"

int main()
{
    int N = 1;
    std::string name = "Zombie";
    Zombie *horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}

//in this main the objects are deleted one by one, also it creats more objects
// int main()
// {
//     std::string names[5] = {"Alex", "Bob", "Charlie", "Dave", "Alex"};
//     for (int i = 0; i < 5; i++)
//     {
//         Zombie *horde = zombieHorde(1, names[i]);
//         delete[] horde;
//     }
//     return(0);
// }
