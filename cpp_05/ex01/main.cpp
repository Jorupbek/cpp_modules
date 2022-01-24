#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat b1("John", 15);
	Bureaucrat b2("Sam", 65);

	try {
		Form f1("Facebook", 55, 60);
		std::cout << f1;

		b1.signForm(f1);
		f1.beSigned(b1);
		b2.signForm(f1);
		f1.beSigned(b2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}