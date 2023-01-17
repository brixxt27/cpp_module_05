#ifndef AFORM_HPP
#define AFORM_HPP

#include <exception>
#include <iostream>

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

class Bureaucrat;

class AForm
{
public:
	AForm(std::string name, int signable_grade, int excutable_grade);
	AForm(const AForm& other);
	virtual ~AForm();

	const std::string&	getName() const;
	bool				getIsSigned() const;
	int					getSignableGrade() const;
	int					getExcutableGrade() const;

	void				beSigned(const Bureaucrat& man);
	virtual void		execute(Bureaucrat const & executor) const = 0;
	void				checkException(const Bureaucrat& man) const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	class AleadyBeSigned : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	class BeNotSigned : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	class FileOpenError : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

private:
	const std::string	_name;
	bool				_is_signed;
	int					_signable_grade;
	int					_excutable_grade;
	
	AForm();
	AForm&	operator=(const AForm& rhs);
};

std::ostream&	operator<<(std::ostream& out, AForm& human);

#endif
