#if !defined(EASYFIND_HPP)
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template <typename T>
typename T::iterator easyfind(T &ref, int value){
	typename T::iterator pos = std::find(ref.begin(), ref.end(), value);
	return((pos != ref.end()) ? pos : throw std::runtime_error("Value not found!"));
}

#endif // EASYFIND_HPP
