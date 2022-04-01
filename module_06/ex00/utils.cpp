
#include "./utils.hpp"

int isAllNum(char *str){
	int index = 0;
	
	while (str[index])
	{
		if(isdigit(str[index]) || str[index] == '-' || str[index] == '+')
			index++;
		else
			return (1);
	}
	return 0;
}

int isAllFloat(char *str){
	int index = -1;
	int count = 0;
	
	while (str[++index])
	{
		if(isdigit(str[index]) || str[index] == '-' || str[index] == '+')
			continue;
		else if (str[index] == '.' || str[index] == 'f')
			count++;
		else
			return (1);
	}
	if (count > 2)
		return (1);
	return 0;
}