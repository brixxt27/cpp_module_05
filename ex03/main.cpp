#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <time.h>

int	main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));

	try {
		Bureaucrat	Master("Yoon", 1);
		Intern		man;
		AForm*		form;

		form = man.makeForm("shrubbery creation", "Saerom");
		Master.signForm(*form);
		Master.executeForm(*form);
		delete form;

		form = man.makeForm("robotomy request", "TaeGwon V");
		Master.signForm(*form);
		Master.executeForm(*form);
		delete form;

		form = man.makeForm("presidential pardon", "jayoon");
		Master.signForm(*form);
		Master.executeForm(*form);
		delete form;

		form = man.makeForm("42", "Seoul");
		Master.signForm(*form);
		Master.executeForm(*form);
		delete form;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
