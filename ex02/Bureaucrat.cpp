#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name)
	, _grade(grade)
{
	if (_grade < HIGHEST_GRADE)
		throw GradeTooHighException();
	else if (_grade > LOWEST_GRADE)
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
	if (_grade < HIGHEST_GRADE)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	++_grade;
	if (_grade > LOWEST_GRADE)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(AForm& form) const
{
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try {
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;	
	}
	catch (std::exception& e) {
		std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
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
