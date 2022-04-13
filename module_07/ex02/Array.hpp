#if !defined(ARRAY_HPP)
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T *_array;
	unsigned int _len;

public:
	Array(void)
	{
		this->_array = NULL;
		this->_len = 0;
		std::cout << "default constructor called\n";
	}
	Array(unsigned int _len)
	{
		this->_array = new T[_len];
		this->_len = _len;
	}
	Array(const Array &copy) : _array(NULL)
	{
		this->operator=(copy);
	}
	Array &operator=(const Array &assign)
	{
		delete[] _array;
		_array = new T[assign._len];
		this->_len = assign._len;
		for (unsigned int i = 0; i < this->_len; i++)
			this->_array[i] = assign._array[i];
		return (*this);
	}
	T &operator[](unsigned int index) const
	{
		if (index >= _len)
			throw std::runtime_error("ERROR: bad memory acess");
		return _array[index];
	}
	unsigned int size()
	{
		return this->_len;
	}
	~Array()
	{
		delete[] this->_array;
	}
};

#endif // ARRAY
