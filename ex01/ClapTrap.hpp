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

    std::string getName();

    void attack(const std::string &target);
    int getAttackDamage();
    
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int getEnergyAmmout();
    int subEnergyAmmout();

    int getHitPointsAmmout();
    int subHitPointsAmmout();
    void addHitPointsAmmout(int amount);
};

