#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
protected:
	std::string _ideas[100];
	int _current_idea;

public:
	Brain( void );
	virtual ~Brain( void );

	void setIdea ( std::string const idea );
	std::string getIdea ( int const num );
};

#endif