#if !defined(ARRAY_HPP)
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T *list;
	unsigned int len;

public:
	Array(void)
	{
		this->list = NULL;
		this->len = 0;
		std::cout << "default constructor called\n";
	}
	Array(unsigned int len)
	{
		this->list = new T[len];
		this->len = len;
	}
	Array(const Array &copy)
	{
		this->operator=(copy);
	}
	Array &operator=(const Array &assign)
	{
		if (this != &assign)
		{
			if (list)
				delete[] list;
			list = new T[assign.len];
			this->len = assign.len;
			for (unsigned int i = 0; i < this->len; i++)
				this->list[i] = assign.list[i];
		}
		return (*this);
	}
	T &operator[](unsigned int index)
	{
		if (index >= len)
			throw std::runtime_error("ERROR: bad memory acess");
		return list[index];
	}
	unsigned int size()
	{
		return this->len;
	}
	~Array()
	{
		if (list)
			delete[] list;
	}
};

#endif // ARRAY
