#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	std::cout << "An instance of WrongCat class constructor called!" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat( void ) {
	if (!(this->_type.empty()))
		std::cout << "An instance of WrongCat class destructor called!" << std::endl;
	else
		std::cout << "A " << _type << " of WrongCat class destructor called!" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "An instance of WrongCat class says \"WrongMeow\"!" << std::endl;
}
