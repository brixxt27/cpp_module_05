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

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	man1("Jim", 7);
		Form		form1("Be a Cadet", 0, 199);

		std::cout << form1 << std::endl;

		form1.beSigned(man1);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

}
