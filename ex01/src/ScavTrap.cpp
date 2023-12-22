#include "../includes/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("No Name") {
    std::cout << "ScavTrap with no name is ready to guard!" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& newName) : ClapTrap(newName) {
    std::cout << "ScavTrap " << this->name << " is ready to guard!" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    this->guardingGate = other.guardingGate;
    std::cout << "ScavTrap " << this->name << " is a copy of another ScavTrap!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name << " is leaving the gate!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "Assigment operator called" << std::endl;
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
        this->guardingGate = other.guardingGate;
    return *this;
}

void ScavTrap::guardGate() {
    if (!(this->guardingGate)) {
        this->guardingGate = true;
        std::cout << "ScavTrap " << this->name << " is now in Gatekeeper mode!" << std::endl;
    }
    else {
        std::cout << "ScavTrap " << this->name << " is already guarding the gate!" << std::endl;
    }
}

void ScavTrap::attack(const std::string& target) {
    if (this->energyPoints > 0 && this->energyPoints > 0) {
        std::cout << "ScavTrap " << this->name << " attacked " << target << " causing "
                  << this->attackDamage << " points of damage!" << std::endl;
        (this->energyPoints)--;
    } else {
        std::cout << "ScavTrap " << this->name << " cannot attack due to lack of energy" << std::endl;
    }
}