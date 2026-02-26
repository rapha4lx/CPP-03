#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int _hitPoints;
    int _energy;
    int _damage;
public:
    ClapTrap(const std::string name);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int getEnergyAmmout();
    int subEnergyAmmout();

    int getHitPointsAmmout();
    int subHitPointsAmmout();
    void addHitPointsAmmout(int amount);

    std::string getName();
    int getAttackDamage();
};

#endif
