#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clapTrap = ClapTrap("first");
    ScavTrap scavTrap = ScavTrap("second");

    // clapTrap.attack("second");
    // clapTrap.takeDamage(1);
    // std::cout << "Current Health amount: " << clapTrap.getHitPointsAmmout() << std::endl;
    // clapTrap.beRepaired(1);
    // std::cout << "Current Health amount: " << clapTrap.getHitPointsAmmout() << std::endl;

    scavTrap.attack("first");
    scavTrap.takeDamage(1);
    std::cout << "Current Health amount: " << scavTrap.getHitPointsAmmout() << std::endl;
    scavTrap.beRepaired(1);
    std::cout << "Current Health amount: " << scavTrap.getHitPointsAmmout() << std::endl;
    scavTrap.guardGate();
    return (0);
}