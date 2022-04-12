#include "./Bureaucrat.hpp"

int main(void)
{
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeGood = Bureaucrat(1, "Art");
		std::cout << gradeGood;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeBad = Bureaucrat(151, "julius");
		std::cout << gradeBad;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeBad = Bureaucrat(0, "julius");
		std::cout << gradeBad;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeGood = Bureaucrat(1, "julius");
		std::cout << gradeGood;
		gradeGood.addGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeGood = Bureaucrat(150, "julius");
		std::cout << gradeGood;
		gradeGood.degrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeBad = Bureaucrat(-30, "julius");
		std::cout << gradeBad;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}