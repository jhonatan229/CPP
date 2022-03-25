#include "./ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("default", 145, 137)
{
	_target = "default target";
	std::cout << "ShrubberyCreationForm default constructor called!\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("default", 145, 137)
{
	_target = target;
	std::cout << "ShrubberyCreationForm custom constructor called!\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm *copy) : Form("default", 145, 137)
{
	this->_target = copy->_target;
	std::cout << "ShrubberyCreationForm Form constructor called!\n";
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	if (this != &assign)
		*this = assign;
	return *this;
	std::cout << "Default ShrubberyCreationForm operator called!\n";
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default ShrubberyCreationForm destructor called!\n";
}

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream	newFile((this->_target + "_shrubbery").c_str());

	newFile << "\n\
	               ,@@@@@@@,\n\
	       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
	    ,&%%%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
	   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
	   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
	   %&&%/ %&%%%%&&@@\\ V /@@' `88\\8 `/88'\n\
	   `&%\\ ` /%&'    |.|        \\ '|8'\n\
	       |o|        | |         | |\n\
	       |.|        | |         | |\n\
	jgs  \\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";

	newFile.close();
}