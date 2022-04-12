#if !defined(SPAN_HPP)
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

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
	int shortestSpan();
	int longestSpan();
};

#endif // SPAN_HPP
