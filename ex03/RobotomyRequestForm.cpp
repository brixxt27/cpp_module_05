#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", SIGN, EXEC)
	, _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other.getName(), other.getIsSigned(), other.getSignableGrade(), other.getExcutableGrade())
	, _target(other._target)
{
    *this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	checkException(executor);

    std::cout << "* DRILLING NOISES *" << std::endl << _target;
    if (std::rand() % 2 == 1)
        std::cout << " has been successfully robotimized!" << std::endl;
    else
        std::cout << " has been not robotimized!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", SIGN, EXEC)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	std::cout << rhs.getName() << " This operator is banned" << std::endl;
    return *this;
}
