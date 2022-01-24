#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string trg) :
		Form("Shrubbery", 145, 137) {
	target = trg;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
		Form(other) {
	target = other.getTarget();
}

const ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& other)
{
	this->target = other.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::trees[2] = {
		"         *\n" \
		"        /|\\\n" \
		"       /*|O\\\n" \
		"      /*/|\\*\\\n" \
		"     /X/O|*\\X\\\n" \
		"    /*/X/|\\X\\*\\\n" \
		"   /O/*/X|*\\O\\X\\\n" \
		"  /*/O/X/|\\X\\O\\*\\\n" \
		" /X/O/*/X|O\\X\\*\\O\\\n" \
		"/O/X/*/O/|\\X\\*\\O\\X\\\n" \
		"        |X|\n" \
		"        |X|\n",
		"         v\n" \
		"        >X<\n" \
		"         A\n" \
		"        d$b\n" \
		"      .d\\$$b.\n" \
		"    .d$i$$\\$$b.\n" \
		"       d$$@b\n" \
		"      d\\$$$ib\n" \
		"    .d$$$\\$$$b\n" \
		"  .d$$@$$$$\\$$ib.\n" \
		"      d$$i$$b\n" \
		"     d\\$$$$@$b\n" \
		"  .d$@$$\\$$$$$@b.\n" \
		".d$$$$i$$$\\$$$$$$b.\n" \
		"        ###\n" \
		"        ###\n" \
		"        ###\n"
};

const char* ShrubberyCreationForm::CouldNotOpenFile::what() const throw() {
	return "ShrubberyCreationForm: Could not open file";
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (this->_sign && this->_grade_success >= executor.getGrade())
	{
		std::fstream f;
		std::string name = target + "_shrubbery.txt";
		f.open(name, std::ios::out | std::ios::app);
		if (f.is_open())
		{
			f << trees[rand() % 2];
			f.close();
		}
		throw ShrubberyCreationForm::CouldNotOpenFile();
	}
	throw Bureaucrat::GradeTooLowException();
}

std::string ShrubberyCreationForm::getTarget() const {
	return target;
}