#include <iostream>
#include <string>

int main(void){
	std::string name = "HI THIS IS BRAIN";
	std::string *stringPTR = &name;
	std::string &stringREF = name;
	std::cout << &name << std::endl
	<< stringPTR << std::endl << &stringREF;
	std::cout << std::endl << name << std::endl
	<< *stringPTR << std::endl << stringREF;
}
