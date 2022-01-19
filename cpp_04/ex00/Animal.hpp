#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {

protected:
	std::string _type;

public:
	Animal();
	virtual ~Animal();

	std::string getType() const;
	void setType(const std::string &newType);

	virtual void makeSound() const;
};


#endif
