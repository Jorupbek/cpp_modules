#include "ScavTrap.hpp"

int main()
{
	ClapTrap hero("Subzero");
	ClapTrap second_hero = hero;

	ScavTrap hero2("Takemoto");
	ScavTrap hero3("Banshee");

	hero.attack("self");
	hero2.attack("Subzero");
	hero3.attack("Subzero");
	hero2.takeDamage(7);
	hero2.beRepaired(4);
	hero2.guardGate();

	hero.takeDamage(1);
}