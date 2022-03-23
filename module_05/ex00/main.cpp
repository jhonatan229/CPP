#include "./Bureaucrat.hpp"

int main(void){
	Bureaucrat bure(149, "marcos");
	std::cout << bure << "\n";
	try
	{
		bure.degrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << bure << "\n";
	try
	{
		bure.degrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "keodke";
	Bureaucrat testerr(180, "julinho");
	std::cout << testerr.getGrade();
}