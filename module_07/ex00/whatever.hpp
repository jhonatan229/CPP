#if !defined(WHATEVER)
#define WHATEVER

#include <iostream>

template<typename T>
void swap(T &numA, T &numB)
{
	T back;
	back = numA;
	numA = numB;
	numB = back;
}

template<typename T>
T	min(T const &numA, T const &numB){
	return ((numA < numB) ? numA : numB);
}

template<typename T>
T	max(T const &numA, T const &numB){
	return ((numA > numB) ? numA : numB);
}

#endif // WHATEVER
