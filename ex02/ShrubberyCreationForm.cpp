#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", SIGN, EXEC)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other.getName(), other.getSignableGrade(), other.getExcutableGrade())
{
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == true)
		throw AleadyBeSigned();
	if (getExcutableGrade() < executor.getGrade())
		throw GradeTooLowException();
}

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", LOWEST_GRADE, LOWEST_GRADE)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	std::cout << "This operator is ban" << std::endl;
}
