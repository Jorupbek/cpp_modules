#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "An instance of Animal class constructor called!" << std::endl;
}

Animal::~Animal( void ) {
	if (!(this->_type.empty()))
		std::cout << "A " << _type << " of Animal class destructor called" << std::endl;
	else
		std::cout << "An instance of Animal class destructor called!" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "An instance of Animal class makes a regular Animal sound!" << std::endl;
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::setType( const std::string &value ) {
	this->_type = value;
}
