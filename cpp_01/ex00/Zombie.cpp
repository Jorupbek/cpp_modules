#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Constructor for " << _name << " called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor for " << _name << " called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ' ' << "BraiiiiiiinnnzzzZ..." << std::endl;
}
