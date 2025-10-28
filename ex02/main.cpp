#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap = ClapTrap("first");

    clapTrap.attack("second");
    clapTrap.takeDamage(1);
    std::cout << "Current Health amount: " << clapTrap.getHitPointsAmmout() << std::endl;
    clapTrap.beRepaired(1);
    std::cout << "Current Health amount: " << clapTrap.getHitPointsAmmout() << std::endl;

    return (0);
}