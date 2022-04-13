#ifndef CONVERTDATA_HPP
#define CONVERTDATA_HPP

#include <string>
#include <iostream>
#include <inttypes.h>

typedef struct s_data
{
	int day;
	std::string month;
} Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif