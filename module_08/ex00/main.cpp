#include "./easyfind.hpp"
#include <array>

int main(void)
{
	try
	{
		std::array<int,5> myarray = { 5, 19, 77, 34, 99 };
		std::cout << *easyfind(myarray, 19) << std::endl;
		std::cout << *easyfind(myarray, 49) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return (0);
}