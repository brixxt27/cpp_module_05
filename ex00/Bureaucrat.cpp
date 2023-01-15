#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name)
	, _grade(grade)
{
	try {
		if (_grade < 1)
			throw GradeTooHighException();
		else if (_grade > 150)
			throw GradeTooLowException();
	} catch(std::exception& e) {
		e.what();
	}
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
	try {
		--_grade;
		if (_grade < 1)
			throw GradeTooHighException();
	} catch (std::exception& e) {
		e.what();
	}
}

void	Bureaucrat::decrementGrade()
{
	try {
		++_grade;
		if (_grade > 150)
			throw GradeTooLowException();
	} catch (std::exception& e) {
		e.what();
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	std::cout << "Grade is too high!" << std::endl;
	std::exit(1);
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	std::cout << "Grade is too low!" << std::endl;
	std::exit(1);
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
	out << human.getName() << ", bureaucrat grade " << human.getGrade() << "." << std::endl;
	
	return out;
}
