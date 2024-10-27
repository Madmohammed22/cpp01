#ifndef ZOMBIE
#define ZOMBIE
#include <iostream>

// class Zombie
// {
// private:
//     std::string name;

// public:
//     Zombie(std::string _name);
//     ~Zombie();
//     void announce();
//     void setName(std::string _name);
// };

class Zombie

{

private:

    std::string name;



public:

    Zombie() {} // Default constructor

    Zombie(std::string _name);
    void setName(std::string _name);

    void announce(void);
    ~Zombie();

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );
#endif

