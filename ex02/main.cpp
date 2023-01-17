#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <time.h>

int	main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	
	//try {
	//	Bureaucrat				man1("Jim", 5);
	//	ShrubberyCreationForm	form1("House");

	//	man1.signForm(form1);
	//	form1.execute(man1);
	//}
	//catch (std::exception& e) {
	//	std::cout << e.what() << std::endl;
	//}


	//try {
	//	Bureaucrat				man1("Jim", 5);
	//	Bureaucrat				man2("Tom", 150);
	//	ShrubberyCreationForm	form1("Saerom");

	//	man1.signForm(form1);
	//	form1.execute(man2);
	//}
	//catch (std::exception& e) {
	//	std::cout << e.what() << std::endl;
	//}


	try {
		Bureaucrat				man1("Jim", 42);
		RobotomyRequestForm		form1("TaeGwon V");

		man1.signForm(form1);
		for (int i = 0; i < 10; i++)
			form1.execute(man1);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}


	// try {
	// 	Bureaucrat				man1("Black-hole master", 1);
	// 	PresidentialPardonForm	form1("jayoon");

	// 	man1.signForm(form1);
	// 	form1.execute(man1);
	// }
	// catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
}
