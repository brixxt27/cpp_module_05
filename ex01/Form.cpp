#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "iomanip"

Form::Form(std::string name, int signable_grade, int excutable_grade)
	: _name(name)
	, _is_signed(false)
	, _signable_grade(signable_grade)
	, _excutable_grade(excutable_grade)
{
	if (_signable_grade < 1 || _excutable_grade < 1)
		throw GradeTooHighException();
	else if (_signable_grade > 150 || _excutable_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& other)
	: _name(other._name)
	, _is_signed(other._is_signed)
	, _signable_grade(other._signable_grade)
	, _excutable_grade(other._excutable_grade)
{
}

Form::~Form()
{
}

const std::string&	Form::getName() const
{
	return _name;
}

bool Form::getIsSigned() const
{
	return _is_signed;
}

int	 Form::getSignableGrade() const
{
	return _signable_grade;
}

int	 Form::getExcutableGrade() const
{
	return _excutable_grade;
}


void Form::beSigned(const Bureaucrat& man)
{
	if (_signable_grade < man.getGrade())
		throw GradeTooLowException();
	_is_signed = true;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

Form::Form()
{
}

Form&	Form::operator=(const Form& rhs)
{
	std::cout << "Form" << rhs._name << " can't be assigned by operator =" << std::endl;
	return *this;
}

std::ostream&	operator<<(std::ostream& out, Form& human)
{
	std::string	longest_string = "Is form signed?: ";

	std::cout << std::setw(longest_string.size()) << "Form's name: " << human.getName() << std::endl;
	std::cout << longest_string << (human.getIsSigned() == true ? "Yes" : "No") << std::endl;
	std::cout << "This form can be signed by grade " << human.getSignableGrade() << " or higher Bureaucrat." << std::endl;
	std::cout << "This form can be excuted by grade " << human.getSignableGrade() << " or higher Bureaucrat.";

	return out;
}
