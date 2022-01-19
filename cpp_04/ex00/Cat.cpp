#include "Cat.hpp"

Cat::Cat() : Animal() {
	setType("Cat");
	std::cout << "+ Cat created with type: " << _type << std::endl;
}

Cat::~Cat() {
	std::cout<< "- Cat destroyed with type: " << _type << std::endl;
}

void Cat::makeSound() const {
	std::cout << "* Cat sound: " << "Meow-meow" << std::endl;
}