#include "../includes/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("Emtpy Frag Trap") {
    std::cout << "A new FragTrap with default name has been created!" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const std::string& newName) : ClapTrap(newName) {
    std::cout << "A new FragTrap named " << name << " has been created!" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap " << name << " has been cloned!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " has been destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "Assigment operator from FragTrap was called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "This FragTrap: " << this->name << " wants a high-five lets go boys!" << std::endl;
}