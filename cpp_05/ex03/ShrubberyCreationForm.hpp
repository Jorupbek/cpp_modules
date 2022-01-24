#ifndef CPP_SHRUBBERYCREATIONFORM_HPP
#define CPP_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
	static std::string trees[2];

public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();

	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	const ShrubberyCreationForm& operator = (const ShrubberyCreationForm& other);

	void execute(Bureaucrat const& executor) const;
	std::string getTarget() const;

	class CouldNotOpenFile : public std::exception{
	public:
		const char* what() const throw();
	};
};

#endif
