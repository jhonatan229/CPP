#include "./Span.hpp"


Span::Span() : _N(5)
{
	//std::cout << "Default Constructor called!\n";
}
Span::Span(unsigned int N) : _N(N)
{
	//std::cout << "Custom Constructor called!\n";
}
Span::Span(const Span &copy)
{
	this->operator=(copy);
	//std::cout << "Copy Constructor called!\n";
}

Span &Span::operator=(const Span &assign)
{
	this->_N = assign._N;
	this->_numbers = assign._numbers;
	//std::cout << "Operator called!\n";
	return *this;
}

Span::~Span()
{
	//std::cout << "Default Destructor called!\n";
}

void Span::addNumber(int number)
{
	if (this->_numbers.size() == this->_N)
		throw std::runtime_error("List of numbers is already full!\n");
	this->_numbers.insert(this->_numbers.end(), number);
}

void	Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	int	length = 0;

	for ( std::vector<int>::iterator it = begin; it != end; it++)
		length++;
	if (this->_numbers.size() + ( length - 1 ) > this->_N)
		throw std::runtime_error("Span is full");

	this->_numbers.insert( this->_numbers.end(), begin, end );
}

int Span::shortestSpan()
{
	if (this->_numbers.size() <= 1)
		throw std::runtime_error("Dont have the necessary quantity of numbers in list to do this excecution");
	int sSpan = INT32_MAX;
	std::sort(this->_numbers.begin(), this->_numbers.end());
	std::vector<int>::iterator pos = this->_numbers.begin();
	for( ; pos != this->_numbers.end(); pos.operator++())
	{
		if (pos + 1 != this->_numbers.end())
		{
			if (*(pos + 1) - *pos < sSpan)
				sSpan = *(pos + 1) - *pos;
		}
	}
	return sSpan;
}
int Span::longestSpan()
{
	if (this->_numbers.size() <= 1)
		throw std::runtime_error("Dont have the necessary quantity of numbers in list to do this excecution");
	int min = *std::min_element(this->_numbers.begin(), this->_numbers.end());
	int max = *std::max_element(this->_numbers.begin(), this->_numbers.end());
	return (max - min);
}