#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	typedef void(Karen::*action)(void);
	static action funcs[];

public:
	void complain( std::string level );
};

#endif
