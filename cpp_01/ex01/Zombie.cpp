#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor for " << _name << " called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ' ' << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &newName)
{
	this->_name = newName;
}
