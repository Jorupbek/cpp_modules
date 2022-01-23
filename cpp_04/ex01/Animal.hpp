#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <iomanip>

class Animal
{
protected:
	std::string _type;

public:
	Animal( void );
	virtual ~Animal( void );

	virtual void makeSound() const;
	std::string getType() const;
	void setType( const std::string &value );
};

#endif