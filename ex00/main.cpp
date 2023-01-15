#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	man1("jim", 150);
	Bureaucrat	man2("bob", 3);

	man1.incrementGrade();
	man1.incrementGrade();
	std::cout << man1;

	man2.decrementGrade();
	man2.decrementGrade();
	std::cout << man2;
}
