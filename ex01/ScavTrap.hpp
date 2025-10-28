#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap(const std::string name);
    ~ScavTrap();

    void guardGate();
    void attack(const std::string &target);
};


