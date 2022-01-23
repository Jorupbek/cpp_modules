#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	std::cout << "An instance of Dog class constructor called!" << std::endl;
	this->_type = "Dog";
	this->_DogBrain = new Brain();
}

Dog::~Dog( void ) {
	if (!(this->_type.empty()))
		std::cout << "An instance of Dog class destructor called!" << std::endl;
	else
		std::cout << "A " << _type << " of Dog class destructor called!" << std::endl;
	delete _DogBrain;
}

void Dog::makeSound() const{
	std::cout << "An instance of Dog class says \"Woof\"!" << std::endl;
}

