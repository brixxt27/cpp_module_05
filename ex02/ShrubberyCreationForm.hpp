#ifndef SHRUBBERYCREATIONFORM 
#define SHRUBBERYCREATIONFORM 

#include "AForm.hpp"
#include "iostream"

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	virtual ~ShrubberyCreationForm();

	virtual void	execute(Bureaucrat const & executor) const;

private:
	std::string	_target;

	enum e_grade
	{
		SIGN = 145,
		EXEC = 137
	};

	ShrubberyCreationForm();
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);
};

#endif
