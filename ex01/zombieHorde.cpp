#include "Zombie.hpp"

Zombie *newZombieN(std::string name, int n)
{
    Zombie *horde = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        horde[i].setName(name);
    }
    return horde;
}
Zombie *zombieHorde(int N, std::string name)
{
    Zombie *obj = newZombieN(name, N);
    return (obj);
}
