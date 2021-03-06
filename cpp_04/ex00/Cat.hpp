#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	~Cat( void );

	virtual void makeSound() const;
};

#endif