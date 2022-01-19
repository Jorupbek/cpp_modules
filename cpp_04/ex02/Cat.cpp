#include "Cat.hpp"

Cat::Cat() : Animal() {
	_type = "Cat";
	_brain = new Brain;

	std::cout << "+ Cat created with type: " << _type << std::endl;
}

Cat::Cat(const Cat &src)  : Animal(src) {
	this->_brain = new Brain(*src._brain);
}

Cat::~Cat() {
	delete _brain;
	std::cout<< "- Cat destroyed with type: " << _type << std::endl;
}

void Cat::makeSound() const {
	std::cout << "* Cat sound: " << "Meow-meow" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Brain &Cat::getBrain() const {
	return *_brain;
}

void Cat::setBrain(const Brain &brain) {
	delete this->_brain;
	this->_brain = new Brain(brain);
}
