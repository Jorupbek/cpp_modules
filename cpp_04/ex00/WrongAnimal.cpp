#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "An instance of WrongAnimal class constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	if (!(this->_type.empty()))
		std::cout << "A " << _type << " of WrongAnimal class destructor called!" << std::endl;
	else
		std::cout << "An instance of WrongAnimal class destructor called!" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "An instance of WrongAnimal class makes a regular WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::setType( const std::string &value ) {
	this->_type = value;
}
