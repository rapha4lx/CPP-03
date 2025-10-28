#include "FragTrap.hpp"
// #include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap = ClapTrap("first");

    // clapTrap.attack("second");
    // clapTrap.takeDamage(1);
    // std::cout << "Current Health amount: " << clapTrap.getHitPointsAmmout() << std::endl;
    // clapTrap.beRepaired(1);
    // std::cout << "Current Health amount: " << clapTrap.getHitPointsAmmout() << std::endl;

    FragTrap frag = FragTrap("reborn");

    frag.attack("second");
    frag.takeDamage(1);
    std::cout << "Current Health amount: " << frag.getHitPointsAmmout() << std::endl;
    frag.beRepaired(1);

    return (0);
}