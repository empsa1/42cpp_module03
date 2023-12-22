#include "../includes/ClapTrap.hpp"

int main() {
    ClapTrap clap("Clappy");

    for (int i = 0; i< 15; i++)
        clap.attack("Target");
    clap.takeDamage(5);
    for (int i = 0; i< 15; i++)
        clap.beRepaired(3);

    ClapTrap clap2 = clap;
    ClapTrap clap3("Another Clappy");
    clap3 = clap2;

    return 0;
}