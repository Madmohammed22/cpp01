#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
// class Weapon;

class HumanB
{
private:
    std::string name;
    Weapon *weapon;
public:

    HumanB(std::string _name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &_weapon);
};

#endif
