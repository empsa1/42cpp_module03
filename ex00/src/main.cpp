#include "../includes/ClapTrap.hpp"

int main() {
    ClapTrap clap("Clappy");

    clap.attack("Target");
    clap.takeDamage(5);
    clap.beRepaired(3);

    ClapTrap clap2 = clap;
    ClapTrap clap3("Another Clappy");
    clap3 = clap2;

    return 0;
}