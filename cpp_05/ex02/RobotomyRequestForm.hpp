#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	std::string target;
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	RobotomyRequestForm(const RobotomyRequestForm& other);
	const RobotomyRequestForm& operator = (const RobotomyRequestForm& other);

	void execute(Bureaucrat const& executor) const;
	std::string getTarget() const;

	class Robotomized: public std::exception {
		public:
			const char *what() const throw();
	};
};
#endif
