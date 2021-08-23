# include "span.hpp"

Span::Span() {

}

Span::Span(unsigned int n) {
	if (this->_vec.max_size() < n)
		n = this->_vec.max_size();
	this->_vec.reserve(n);
	this->_max = n;
}

Span::~Span() {

}

Span & Span::operator=(Span const & span) {
	if (this == &span)
		return *this;
	this->_vec = span._vec;
	this->_max = span._max;
	return *this;
}

Span::Span(const Span &span) {
	*this = span;
}

void Span::addNumber(int n) {
	if (this->_vec.size() + 1 > _max)
	{
		std::cout << "Element " << n << " cannot be added" << std::endl;
		throw std::exception();
	}
	this->_vec.push_back(n);
}

void Span::addNumberRange(std::vector<int>::const_iterator from, std::vector<int>::const_iterator to) {
	std::vector<int>::iterator it = this->_vec.begin() + this->_vec.size();
	int cnt = std::distance(from, to);
	if (cnt + this->_vec.size() > this->_max) {
		std::cout << "Cannot add " << cnt << " elements" << std::endl;
		throw std::exception();
	}
	this->_vec.insert(it, from, to);
}

int Span::shortestSpan() {
	if (this->_vec.size() == 0 || this->_vec.size() == 1)
	{
		std::cout << "No span" << std::endl;
		throw std::exception();
	}
	Span *temp = new Span(this->_max);
	temp->_vec = this->_vec;
	std::sort(temp->_vec.begin(), temp->_vec.end());
	int min1 = INT_MAX;
	for (int i = 0; i != temp->_vec.size(); ++i) {
		if (abs(temp->_vec[i + 1] - temp->_vec[i]) < min1)
			min1 = abs(temp->_vec[i + 1] - temp->_vec[i]);
	}
	return min1;
}

int Span::longestSpan() {
	if (this->_vec.size() == 0 || this->_vec.size() == 1)
	{
		std::cout << "No span" << std::endl;
		throw std::exception();
	}
	Span *temp = new Span(this->_max);
	temp->_vec = this->_vec;
	std::sort(temp->_vec.begin(), temp->_vec.end());
	int min = *temp->_vec.begin();
	int max = *(temp->_vec.end() - 1);
	delete temp;
	return (max - min);
}
