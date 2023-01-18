#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <iostream>

class Intern
{
public:
	Intern();
	virtual ~Intern();

	AForm*	makeForm(std::string form_name, std::string form_target) const;
private:
	enum e_cnt_form {MAX = 3};

	class NonExistentForm : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	
	Intern(const Intern& other);
	Intern&	operator=(const Intern& rhs);
};

#endif
