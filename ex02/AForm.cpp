#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "iomanip"

AForm::AForm(std::string name, int signable_grade, int excutable_grade)
	: _name(name)
	, _is_signed(false)
	, _signable_grade(signable_grade)
	, _excutable_grade(excutable_grade)
{
	if (_signable_grade < HIGHEST_GRADE || _excutable_grade < HIGHEST_GRADE)
		throw GradeTooHighException();
	else if (_signable_grade > LOWEST_GRADE || _excutable_grade > LOWEST_GRADE)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
	: _name(other._name)
	, _is_signed(other._is_signed)
	, _signable_grade(other._signable_grade)
	, _excutable_grade(other._excutable_grade)
{
}

AForm::~AForm()
{
}

const std::string&	AForm::getName() const
{
	return _name;
}

bool AForm::getIsSigned() const
{
	return _is_signed;
}

int	 AForm::getSignableGrade() const
{
	return _signable_grade;
}

int	 AForm::getExcutableGrade() const
{
	return _excutable_grade;
}


void AForm::beSigned(const Bureaucrat& man)
{
	if (_is_signed == true)
		throw AleadyBeSigned();
	if (_signable_grade < man.getGrade())
		throw GradeTooLowException();
	_is_signed = true;
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

const char*	AForm::AleadyBeSigned::what() const throw()
{
	return "Aleady be signed!";
}

const char*	AForm::BeNotSigned::what() const throw()
{
	return "Be not signed!";
}

AForm::AForm()
	: _name("Default")
	, _is_signed(false)
	, _signable_grade(LOWEST_GRADE)
	, _excutable_grade(LOWEST_GRADE)
{
}

AForm&	AForm::operator=(const AForm& rhs)
{
	std::cout << "Form" << rhs._name << " can't be assigned by operator =" << std::endl;
	return *this;
}

std::ostream&	operator<<(std::ostream& out, AForm& human)
{
	std::string	longest_string = "Is form signed?: ";

	std::cout << std::setw(longest_string.size()) << "Form's name: " << human.getName() << std::endl;
	std::cout << longest_string << (human.getIsSigned() == true ? "Yes" : "No") << std::endl;
	std::cout << "This form can be signed by grade " << human.getSignableGrade() << " or higher Bureaucrat." << std::endl;
	std::cout << "This form can be excuted by grade " << human.getExcutableGrade() << " or higher Bureaucrat.";

	return out;
}
