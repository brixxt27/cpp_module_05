#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

AForm*	Intern::makeForm(std::string form_name, std::string form_target) const
{
	AForm*				form;
	const std::string	arr[MAX] =
							{"shrubbery creation"
							, "robotomy request"
							, "presidential pardon"};
	int					idx_form = -1;

	for (int i = 0; i < MAX; ++i) {
		if (arr[i] == form_name) {
			idx_form = i;
			break;
		}
	}

	if (idx_form == -1)
		throw NonExistentForm();
	
	switch (idx_form) {
		case 0:
			form = new ShrubberyCreationForm(form_target);
			break;
		case 1:
			form = new RobotomyRequestForm(form_target);
			break;
		case 2:
			form = new PresidentialPardonForm(form_target);
			break;
	}
	std::cout << "Intern creates " << form->getName() << std::endl;
	return form;
}

const char*	Intern::NonExistentForm::what() const throw()
{
	return "This is a nonexistent form!";
}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern&	Intern::operator=(const Intern& rhs)
{
	if (this == &rhs)
		return *this;
	return *this;
}
