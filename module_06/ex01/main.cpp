#include <string>
#include <iostream>
#include <inttypes.h>

struct Data
{
    int day;
	std::string month;
};

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t> (ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

int main(void)
{
	Data data;
	data.day = 3;
	data.month = "julho";
	uintptr_t pt = serialize(&data);
	std::cout << "int ptr: "<< pt << "\ndata before:" << &data << std::endl;
	Data *datan = deserialize(pt);
	std::cout << "data after: " << datan << std::endl;
	return (0);
}