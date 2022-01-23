#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain
{
private:
	Brain* _CatBrain;

public:
	Cat( void );
	virtual ~Cat( void );

	virtual void makeSound() const;
};

#endif