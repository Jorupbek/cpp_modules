#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string trg) :
Form("Presidential Pardon", 25, 5) {
	target = trg;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
Form(other) {
	target = other.getTarget();
}

const PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& other)
{
	this->target = other.getTarget();
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (this->_sign && this->_grade_success >= executor.getGrade())
		std::cout << this->target << " has been pardoned by Barak Obama\n";
	else
		throw Bureaucrat::GradeTooLowException();
}

std::string PresidentialPardonForm::getTarget() const {
	return target;
}
