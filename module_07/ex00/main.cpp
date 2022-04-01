#include "whatever.hpp"

int main()
{
	int n1 = 30;
	int n2 = 10;
	char c1 = 'a';
	char c2 = 'b';

	std::cout << n1 << " " << n2 << "\n";
	::swap(n1, n2);
	std::cout << n1 << " " << n2 << "\n\n";
	std::cout << "(int)Min between " << n1 << " and " << n2 << " is " << ::min(n2, n1) << "\n";
	std::cout << "(char)Min between " << c1 << " and " << c2 << " is " << ::min(c2, c1) << "\n";
	std::cout << "(int)max between " << n1 << " and " << n2 << " is " << ::max(n2, n1) << "\n";
	std::cout << "(char)max between " << c1 << " and " << c2 << " is " << ::max(c2, c1) << "\n\n\n";

	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
}