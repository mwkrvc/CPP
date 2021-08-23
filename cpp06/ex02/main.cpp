# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

# include <iostream>

void identify(Base* p) {
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a != 0)
		std::cout << "A" << std::endl;
	else if (b != 0)
		std::cout << "B" << std::endl;
	else if (c != 0)
		std::cout << "C" << std::endl;
}

void identify(Base& p) {

	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast & e) {
		e.what();
	}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast & e) {
		e.what();
	}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast & e) {
		e.what();
	}
}

Base * generate(void) {
	srand(time(NULL));
	int i = rand() % 3;
	Base * tmp;
	switch (i) {
		case 0:
			tmp = new A;
			break;
		case 1:
			tmp = new B;
			break;
		case 2:
			tmp = new C;
			break;
		default:
			tmp = NULL;
	}
	return tmp;
}

int main()
{
	Base *gen = generate();
	std::cout << "Identify random by reference: ";
	identify(gen);
	std::cout << "Identify random by address ";
	identify(*gen);

	Base *test = new A;
	std::cout << "Identify A by reference: ";
	identify(test);
	std::cout << "Identify A by address ";
	identify(*test);
	
	delete gen;
	delete test;
}
