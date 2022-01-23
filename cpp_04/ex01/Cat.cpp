#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "An instance of Cat class constructor called!" << std::endl;
	this->_type = "Cat";
	this->_CatBrain = new Brain();
}

Cat::~Cat( void ) {
	if (!(this->_type.empty()))
		std::cout << "An instance of Cat class desctructor called!" << std::endl;
	else
		std::cout << "A " << _type << " of Cat class destructor called!" << std::endl;
	delete _CatBrain;
}

void Cat::makeSound() const{
	std::cout << "An instance of Cat class says \"Meow\"!" << std::endl;
}
