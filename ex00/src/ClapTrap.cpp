#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& newName) : name(newName), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called for " << name << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " can't attack due to lack of energy or health!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
        hitPoints -= amount;
    } else {
        std::cout << "ClapTrap " << name << " is already out of hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints > 0) {
        std::cout << "ClapTrap " << name << " is being repaired and gains " << amount << " hit points!" << std::endl;
        hitPoints += amount;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " can't be repaired as it's out of hit points!" << std::endl;
    }
}