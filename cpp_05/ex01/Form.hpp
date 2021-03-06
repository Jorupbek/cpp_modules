#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string _name;
	const int _grade_sign;
	const int _grade_success;
	bool _sign;

public:
	Form(std::string name, int grade_sign, int grade_success);
	~Form();

	Form(Form const& copy);
	Form& operator=(Form const& src);

	std::string const	getName() const;
	bool getIsSign() const;
	int	getGradeToSign() const;
	int	getGradeToExe() const;
	void beSigned(Bureaucrat& b);

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};
};

std::ostream& operator << (std::ostream &out, const Form &b);

#endif
