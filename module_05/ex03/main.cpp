#include "./Bureaucrat.hpp"
#include "./Intern.hpp"

int main(void)
{
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat grade = Bureaucrat(1, "Grey");
		rrf->beSigned( grade );
		grade.executeForm( *rrf );
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential request", "Bender");
		Bureaucrat grade = Bureaucrat(1, "Grey");
		rrf->beSigned( grade );
		rrf->execute( grade );
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
		Bureaucrat grade = Bureaucrat(1, "Grey");
		rrf->beSigned( grade );
		rrf->execute( grade );
		delete rrf;
	}
	std::cout << std::endl;
	try	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm(" creation", "Bender");
		delete rrf;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm(" creation", "");
		delete rrf;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}