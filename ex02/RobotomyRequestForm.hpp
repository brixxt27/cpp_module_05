#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "AForm.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	virtual ~RobotomyRequestForm();

	virtual void execute(Bureaucrat const& executor) const;

private:
	std::string _target;

	enum e_grade
	{
		SIGN = 72,
		EXEC = 45
	};

	RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
};

#endif
