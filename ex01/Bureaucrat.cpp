#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name)
	, _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
	: _name(other._name)
	, _grade(other._grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

const std::string&	Bureaucrat::getName() const
{
	return _name;
}

int		Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::incrementGrade()
{
	--_grade;
	if (_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	++_grade;
	if (_grade > 150)
		throw GradeTooLowException();
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat's grade is too high!";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat's grade is too low!";
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Bureaucrat" << rhs._name << " can't be assigned by operator =" << std::endl;
	return *this;
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat& human)
{
	out << human.getName() << ", bureaucrat grade " << human.getGrade() << ".";
	
	return out;
}
