#if !defined(SPAN_HPP)
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>
#include <stdint.h>

class Span
{
private:
	std::vector<int> _numbers;
	unsigned int _N;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &copy);
	Span &operator=(const Span &assign);
	~Span();

	void addNumber(int number);
	void addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );
	int shortestSpan();
	int longestSpan();
};

#endif // SPAN_HPP
