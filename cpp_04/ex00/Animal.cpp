#include "Animal.hpp"

Animal::Animal() : _type("[Animal]") {
	std::cout << "+ Animal created: " << _type << std::endl;
}

Animal::~Animal() {
	std::cout << "- Animal destroyed: " << _type << std::endl;
}

void Animal::makeSound() const {
	std::cout << "* Animal sound: [" << "EMPTY" << "]" << std::endl;
}

void Animal::setType(const std::string &newType) {
	_type = newType;
}

std::string Animal::getType() const {
	return _type;
}