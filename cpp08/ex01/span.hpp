#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span {
public:
	Span();
	Span(unsigned int n);
	~Span();
	Span & operator=(Span const & span);
	Span(Span const & span);

	void addNumber(int n);
	void addNumberRange(std::vector<int>::const_iterator from, std::vector<int>::const_iterator to);
	int shortestSpan();
	int longestSpan();

private:
	unsigned int _max;
	std::vector<int> _vec;
};

#endif