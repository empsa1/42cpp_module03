#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    virtual ~ScavTrap();
    ScavTrap& operator=(const ScavTrap& other);
    void guardGate();
    void attack(const std::string &target);
private:
    bool guardingGate;
};

#endif