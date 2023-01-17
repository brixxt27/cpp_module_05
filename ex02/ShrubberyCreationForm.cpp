#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", SIGN, EXEC)
	, _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other.getName(), other.getSignableGrade(), other.getExcutableGrade())
	, _target(other._target)
{
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string		file_name = _target + "_shrubbery";
	std::ofstream	ofs;
	std::string		ascii_tree =
						"       _-_         \n"
                        "    /~~   ~~\\     \n"
                        " /~~         ~~\\  \n"
                        "{               }  \n"
                        " \\  _-     -_  /  \n"
                        "   ~  \\ \\/\\/  ~ \n"
                        "_- -   | | _- _    \n"
                        " |_|-  | | ||-|    \n"
                        "  |   // \\  |      ";

	checkException(executor);
	ofs.open(file_name.c_str(), std::ofstream::out);
	if (ofs.is_open() == false)
		throw FileOpenError();
	ofs << ascii_tree;
	std::cout << "Create a Shrubbery" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", SIGN, EXEC)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	std::cout << rhs.getName() << " This operator is banned" << std::endl;
	return *this;
}
