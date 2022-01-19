#include "Dog.hpp"

Dog::Dog() : Animal() {
	setType("Dog");
	std::cout << "+ Dog created with type: " << _type << std::endl;
}

Dog::~Dog() {
	std::cout<< "- Dog destroyed with type: " << _type << std::endl;
}

void Dog::makeSound() const {
	std::cout << "* Dog sound: " << "Gav-gav" << std::endl;
}