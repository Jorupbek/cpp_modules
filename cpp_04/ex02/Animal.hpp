#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class Animal {

protected:
	std::string _type;

public:
	Animal();
	Animal(Animal const &src);
	Animal &operator=(const Animal &rhs);
	virtual ~Animal();

	std::string getType() const;
	void setType(const std::string &newType);

	virtual void makeSound() const;
	virtual Brain &getBrain() const = 0;
};


#endif
