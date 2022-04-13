#include "./utils.hpp"

void tryChar(char *str)
{
	std::cout << "char: ";
	if (str[1] == '\0')
	{
		if (static_cast<int>(str[0]) < 32)
			std::cout << "Non displayable";
		else if (isdigit(str[0]))
			std::cout << "Non displayable";
		else
			std::cout << "'" << str[0] << "'";
	}
	else if (isAllNum(str) == 0)
	{
		int value = atoi(str);
		if (isascii(value) && value > 32)
			std::cout << static_cast<char>(value);
		else if (isascii(value))
			std::cout << "Non displayable";
		else
			std::cout << "impossible";
	}
	else if (isAllFloat(str) == 0)
		std::cout << "'*'";
	else
		std::cout << "impossible";
	std::cout << std::endl;
}

void printOnlyOne(long double number, const char *str)
{
	std::cout << number;
	if (number == static_cast<int>(number) && isinff(number) == 0)
		std::cout << ".0";
	if (strcmp(str, "float") == 0)
		std::cout << "f";
	std::cout << std::endl;
}

void tryFloat(char *str)
{
	char *dif;
	long double d;

	d = strtod(str, &dif);
	std::cout << "float: ";
	if (isinff(d) == -1){
		std::cout << "-inff\n";
		return;
	}
	if (isinff(d) == 1){
		std::cout << "+inff\n";
		return;
	}
	if (isascii(str[0]) && strlen(str) == 1)
	{
		if (isdigit(str[0]))
			printOnlyOne(static_cast<long double>(str[0] - 48), "float");
		else
			printOnlyOne(static_cast<long double>(str[0]), "float");
	}
	else if (strlen(dif) <= 1 && (dif[0] == 'f' || dif[0] == '\0'))
	{
		printOnlyOne(d, "float");
	}
	else
	{
		std::cout << "impossible\n";
	}
}

void tryDouble(char *str)
{
	char *dif;
	long double d;

	d = strtod(str, &dif);
	std::cout << "double: ";
	if (isinff(d) == -1){
		std::cout << "-inf\n";
		return;
	}
	if (isinff(d) == 1){
		std::cout << "+inf\n";
		return;
	}
	if (isinff(d) && (str[0] == '+' || strlen(str) == 3))
		std::cout << '+';
	if (isascii(str[0]) && strlen(str) == 1)
	{
		if (isdigit(str[0]))
			printOnlyOne((str[0] - 48), "double");
		else
			printOnlyOne((str[0]), "double");
	}
	else if (strlen(dif) <= 1 && (dif[0] == 'f' || dif[0] == '\0'))
	{
		printOnlyOne(d, "double");
	}
	else
	{
		std::cout << "impossible\n";
	}
}

void tryInt(char *str)
{
	std::cout << "Int: ";
	if (isascii(str[0]) && strlen(str) == 1)
	{
		if (isdigit(str[0]))
			std::cout << static_cast<int>(str[0] - 48);
		else
			std::cout << static_cast<int>(str[0]);
	}
	else if (isAllFloat(str) == 0)
	{
		long int total = atol(str);
		if (total > INT32_MAX || total < INT32_MIN)
			std::cout << "impossible";
		else
			std::cout << atoi(str);
	}
	else
		std::cout << "impossible";
	std::cout << std::endl;
}

int main(int argv, char *argc[])
{
	if (argv != 2){
		std::cout << "Wrong Parameters!" << std::endl;
		return (1);
	}
	tryChar(argc[1]);
	tryInt(argc[1]);
	tryFloat(argc[1]);
	tryDouble(argc[1]);
	return (0);
}