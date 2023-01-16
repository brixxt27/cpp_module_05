#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try {
		Bureaucrat	man1("Jim", 5);
		Form		form1("Be a Cadet", 3, 6);

		std::cout << form1 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	//try {
	//}
	//catch (std::exception& e) {
	//	std::cout << e.what() << std::endl;
	//}
}
