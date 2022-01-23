#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	std::cout << "An instance of Dog class constructor called!" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog( void ) {
	if (!(this->_type.empty()))
		std::cout << "An instance of Dog class destructor called!" << std::endl;
	else
		std::cout << "A " << _type << " of Dog class destructor called!" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "An instance of Dog class says \"Woof\"!" << std::endl;
}

