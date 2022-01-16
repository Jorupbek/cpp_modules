#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

#define FIXED_POINT_FRACTIONAL_BITS 8

class Fixed
{
private:
	int _raw;
	static const int _fracBits = FIXED_POINT_FRACTIONAL_BITS;

public:
	Fixed();
	Fixed(int newRaw);
	Fixed(float newRaw);
	Fixed(Fixed const &src);
	~Fixed();

	Fixed & operator=(Fixed const &rhs);

	int getRawBits( void ) const;
	void setRawBits(int newRaw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream & o, Fixed const& i);

#endif
