#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap hero("Subzero");
	ClapTrap second_hero = hero;

	ScavTrap hero2("Tokimooto");
	ScavTrap hero3("Banshee");

	FragTrap hero4("Troy");

	hero4.highFivesGuys();
	hero4.attack("Banshee");
	hero.attack("self");
	hero2.attack("Subzero");
	hero2.takeDamage(7);
	hero2.beRepaired(4);
	hero2.guardGate();
}