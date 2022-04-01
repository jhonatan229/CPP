#include "./utils.hpp"

void tryChar(char *str)
{
	std::cout << "char: ";
	if (str[1] == '\0')
	{
		if (static_cast<int>(str[0]) < 32)
			std::cout << "Non displayable";
		if (isdigit(str[0]))
			std::cout << "Non displayable";
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

void printOnlyOne(float number, const char *str)
{
	float fractional, ref;

	std::cout << number;
	fractional = std::modf(number, &ref);
	if (fractional == 0 && isinff(number))
		std::cout << ".0";
	if (strcmp(str, "float") == 0)
		std::cout << "f";
	std::cout << std::endl;
}

void tryFloat(char *str)
{
	char *dif;
	float d;

	d = strtod(str, &dif);
	// std::cout << dif << "    " << str << "    " << (float)d;
	std::cout << "float: ";
	if (isascii(str[0]) && strlen(str) == 1)
	{
		printOnlyOne(static_cast<float>(str[0]), "float");
	}
	else if (strlen(dif) <= 1 && (dif[0] == 'f' || dif[0] == '\0'))
	{
		printOnlyOne(d, "float");
	}
	else
	{
		std::cout << "Impossible\n";
	}
}

void tryDouble(char *str)
{
	char *dif;
	float d;

	d = strtod(str, &dif);
	std::cout << "double: ";
	if (isascii(str[0]) && strlen(str) == 1)
	{
		printOnlyOne(static_cast<float>(str[0]), "double");
	}
	else if (strlen(dif) <= 1 && (dif[0] == 'f' || dif[0] == '\0'))
	{
		printOnlyOne(d, "double");
	}
	else
	{
		std::cout << "Impossible\n";
	}
}

void tryInt(char *str)
{
	std::cout << "Int: ";
	if (isascii(str[0]) && strlen(str) == 1)
		std::cout << static_cast<int>(str[0]);
	else if (isAllFloat(str) == 0)
	{
		std::cout << atoi(str);
	}
	else
		std::cout << "Impossible";
	std::cout << std::endl;
}

int main(int argv, char *argc[])
{
	if (argv != 2)
		return (1);
	tryChar(argc[1]);
	tryInt(argc[1]);
	tryFloat(argc[1]);
	tryDouble(argc[1]);
	// std::cout << typeid(]) << std::endl;
	return 0;
}