#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	index;
	int	pos;

	index = 1;
	if (argc < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else{
		while (index < argc){
			pos = 0;
			while (argv[index][pos])
				std::cout << (char)toupper(argv[index][pos++]);
			std::cout << " ";
			index++;
		}
		std::cout << std::endl;
	}
	return (0);
}