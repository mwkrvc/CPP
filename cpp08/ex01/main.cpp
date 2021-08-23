#include "span.hpp"

int main()
{
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {}
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);
		sp.addNumber(11);
		sp.addNumber(11);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {}
	try {
		Span sp = Span(30000);
		sp.addNumber(5);
		sp.addNumber(3);
		std::vector<int> temp (20000, 400);
		sp.addNumberRange(temp.begin(), temp.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {}
	try {
		Span sp = Span(20000);
		sp.addNumber(5);
		sp.addNumber(3);
		std::vector<int> temp (20000, 400);
		sp.addNumberRange(temp.begin(), temp.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {}
	try {
		Span sp = Span(20000);
		std::vector<int> temp (20000, 400);
		sp.addNumberRange(temp.begin(), temp.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {}
	try {
		Span sp = Span(0);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {}
}
