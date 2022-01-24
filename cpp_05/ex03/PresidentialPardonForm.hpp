#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:
	std::string target;

public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();

	PresidentialPardonForm(const PresidentialPardonForm& other);
	const PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

	void execute(Bureaucrat const& executor) const;
	std::string getTarget() const;
};

#endif

