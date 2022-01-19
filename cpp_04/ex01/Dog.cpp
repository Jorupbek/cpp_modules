#include "Dog.hpp"

Dog::Dog() : Animal() {
	_type = "Dog";
	_brain = new Brain;

	std::cout << "+ Dog created with type: " << _type << std::endl;
}

Dog::Dog(const Dog &src)  : Animal(src) {
	this->_brain = new Brain(*src._brain);
}

Dog::~Dog() {
	delete _brain;
	std::cout<< "- Dog destroyed with type: " << _type << std::endl;
}

void Dog::makeSound() const {
	std::cout << "* Dog sound: " << "Gav-gav" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Brain &Dog::getBrain() const {
	return *_brain;
}

void Dog::setBrain(const Brain &brain) {
	delete this->_brain;
	this->_brain = new Brain(brain);
}