#if !defined(ITER)
#define ITER

#include <iostream>
#include <string>

template <typename T>
void iter(T *lst, const unsigned int size, void (*fun)( const T&)){
	for (unsigned int i = 0; i < size; i++)
	{
		fun(lst[i]);
	}
}

template <typename T>
void myPrint(T const content){
	std::cout << content << " *-* \n";
}

#endif // ITER
