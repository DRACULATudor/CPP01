#pragma once

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
private:
    std::string type;
public:

    Weapon(const std::string &type);
    ~Weapon();
    const std::string &gettype() const;
    void    setType(const std::string &type);
};

#endif