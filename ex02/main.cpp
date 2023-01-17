#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try {
		Bureaucrat				man1("Jim", 5);
		ShrubberyCreationForm	form1("House");

		man1.signForm(form1);
		form1.execute(man1);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat				man1("Jim", 5);
		Bureaucrat				man2("Tom", 150);
		ShrubberyCreationForm	form1("Saerom");

		man1.signForm(form1);
		form1.execute(man2);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
