#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(const std::string& name);
	void setName(const std::string& newName);
	~Zombie();

	void announce();
};

Zombie *zombieHorde(int N, const std::string& name);

#endif