#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
#include <iostream>

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

class Bureaucrat;

class Form
{
public:
	Form(std::string name, int signable_grade, int excutable_grade);
	Form(const Form& other);
	virtual ~Form();

	const std::string&	getName() const;
	bool				getIsSigned() const;
	int					getSignableGrade() const;
	int					getExcutableGrade() const;

	void				beSigned(const Bureaucrat& man);

private:
	const std::string	_name;
	bool				_is_signed;
	int const			_signable_grade;
	int const			_excutable_grade;

	class GradeTooHighException : public std::exception
	{
		virtual const char*	what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char*	what() const throw();
	};
	class AleadyBeSigned : public std::exception
	{
		virtual const char*	what() const throw();
	};
	
	Form();
	Form&	operator=(const Form& rhs);
};

std::ostream&	operator<<(std::ostream& out, Form& human);

#endif
