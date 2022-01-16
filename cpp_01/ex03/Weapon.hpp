#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon();
	Weapon(const std::string &newType);

	std::string getType() const;
	void setType(const std::string &newType);
};

#endif
