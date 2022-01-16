#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &_weapon;
	std::string _name;

public:
	HumanA(const std::string &newName, Weapon &newWeapon);

	void attack();
};

#endif
