#include "Brain.hpp"

Brain::Brain( void ) : _current_idea(0) {
	std::cout << "An instance of Brain class constructor called!" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "An instance of Brain class destructor called!" << std::endl;
}

void Brain::setIdea ( std::string const idea ) {
	if (this->_current_idea > 99)
		std::cout << "There are only 99 ideas in brain!" << std::endl;
	else {
		this->_ideas[this->_current_idea] = idea;
		_current_idea++;
	}
}

std::string Brain::getIdea ( int const num ) {
	if (num < 0 || num > 99) {
		std::cout << "There are only 99 ideas in brain!" << std::endl;
		return ("");
	}
	else
		return (this->_ideas[num]);
}