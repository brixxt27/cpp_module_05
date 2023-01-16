#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>

class Form;

class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
	virtual ~Bureaucrat();

	const std::string&	getName() const;
	int					getGrade() const;
	void				incrementGrade();
	void				decrementGrade();

	void				signForm(const Form& form) const;

private:
	const std::string	_name;
	int					_grade;

	class GradeTooHighException : public std::exception
	{
		virtual const char*	what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	Bureaucrat();
	Bureaucrat&	operator=(const Bureaucrat& rhs);
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat& human);

#endif
