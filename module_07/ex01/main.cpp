#include "./iter.hpp"

int main(void){
	std::cout << "----INT LIST----\n";
	int lst[4] = {45, 43, 20, 3};
	::iter(lst, 4, &myPrint);
	std::cout << "\n\n---String LIST----\n";
	std::string strlst[4] = {"harry", "ronny", "malfoy", "gina"};
	::iter(strlst, 4, &myPrint);
}