#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try {
		Bureaucrat	man1("Jim", 1);
		Form		form1("Be a Cadet", 3, 6);

		std::cout << form1 << std::endl;

		form1.beSigned(man1);

		std::cout << form1 << std::endl;
		form1.beSigned(man1);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	man1("Bob", 7);
		Form		form1("Burn the black-hole", 0, 199);

		std::cout << form1 << std::endl;

		form1.beSigned(man1);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	man1("James", 1);
		Form		form1("End of cpp module", 2, 140);

		std::cout << form1 << std::endl;

		man1.signForm(form1);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
