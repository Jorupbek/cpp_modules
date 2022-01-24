#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("John", 200);
		std::cout << a;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat b ("Sam", 1);
		b.incrementGrade();
		std::cout << b;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat b ("Stark", 99);
		b.decrementGrade();
		std::cout << b;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}