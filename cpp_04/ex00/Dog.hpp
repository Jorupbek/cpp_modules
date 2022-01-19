#ifndef MODULES_DOG_HPP
#define MODULES_DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog();
	~Dog();

	void makeSound() const;

};

#endif
