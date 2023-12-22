#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "A new ClapTrap with no name has been created!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& newName) : name(newName), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "A new ClapTrap named " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints),
      energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    std::cout << "ClapTrap " << name << " has been cloned!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target << " causing "
                  << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " is out of energy and can't attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        hitPoints = (amount >= hitPoints) ? 0 : hitPoints - amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Current hit points: "
                  << hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has already been destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints > 0 && this->energyPoints > 0) {
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points! Current hit points: "
                  << hitPoints << std::endl;
        energyPoints--;
    } else if (this->energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " is out of energy and cant repair" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << name << " has already been destroyed and can't be repaired!" << std::endl;
    }
}