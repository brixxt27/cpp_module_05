#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	virtual ~PresidentialPardonForm();

	virtual void	execute(Bureaucrat const & executor) const;

private:
	std::string	_target;

	enum e_grade
	{
		SIGN = 25,
		EXEC = 5
	};

	PresidentialPardonForm();
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);
};

#endif
