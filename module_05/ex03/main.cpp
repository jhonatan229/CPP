#include "./Bureaucrat.hpp"
#include "./Intern.hpp"

int main(void)
{
	std::cout << "\n///////TEST PRESIDENTIAL//////////\n";
	Bureaucrat validburo;
	Intern intern;
	Form *robo = intern.makeForm("presidential request", "pesident form");
	validburo.executeForm(*robo);
	try
	{
		Form *robo = intern.makeForm("presidential request", "");
		validburo.executeForm(*robo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete robo;
	return 0;
}