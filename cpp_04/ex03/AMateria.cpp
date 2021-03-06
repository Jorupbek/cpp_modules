#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "use on: " << target.getName() << std::endl;
}

