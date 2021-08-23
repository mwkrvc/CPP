# include "easyfind.hpp"
# define KGRN  "\x1B[32m"
# define KNRM  "\x1B[0m"

int main() {
	std::vector<int> vect;
	vect.reserve(5);
	std::list<int> lst;
	std::deque<int> deq;
	for (int i = 0; i < 5; ++i) {
		vect.push_back(i);
		lst.push_back(i);
		deq.push_back(i);
	}
	std::cout << KGRN << "testing vector" << KNRM << std::endl;
	try {
		std::vector<int>::const_iterator itl1 = easyfind(vect, 3);
		std::cout << *itl1<< std::endl;
		std::vector<int>::const_iterator itl2 = easyfind(vect, 50);
		std::cout << *itl2 << std::endl;
	}
	catch (std::exception & e) {}
	std::cout << KGRN << "testing list" << KNRM << std::endl;
	try {
		std::list<int>::const_iterator itv1 = easyfind(lst, 3);
		std::cout << *itv1 << std::endl;
		std::list<int>::const_iterator itv2 = easyfind(lst, 50);
		std::cout << *itv2 << std::endl;
	}
	catch (std::exception & e) {}
	std::cout << KGRN << "testing double ended queue" << KNRM << std::endl;
	try {
		std::deque<int>::const_iterator itq1 = easyfind(deq, 3);
		std::cout << *itq1 << std::endl;
		std::deque<int>::const_iterator itq2 = easyfind(deq, 50);
		std::cout << *itq2 << std::endl;
	}
	catch (std::exception & e) {}
}
