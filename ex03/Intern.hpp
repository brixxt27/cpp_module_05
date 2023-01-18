#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <iostream>

class Intern
{
public:
	Intern();
	Intern(const Intern& other);
	Intern&	operator=(const Intern& rhs);
	virtual ~Intern();

	AForm*	makeForm(std::string form_name, std::string form_target) const;
private:
	enum e_cnt_form {MAX = 3};

	class NonExistentForm : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
};

#endif
