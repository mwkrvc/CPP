# include "Array.hpp"
# define KNRM  "\x1B[0m"
# define KRED  "\x1B[31m"

class A {
public:
	A() {};
	A(int n) : _n(n) {};
	~A() {};
	A(const A & a) { *this = a;};
	A & operator=(const A & a) { this->_n = a._n; return *this;};
	int getN() const { return this->_n;};
	void setN(int i) { this->_n = i;};

private:
	int _n;
};

std::ostream  & operator<<(std::ostream & o, A const & a)
{
	o << a.getN();
	return o;
}

int main() {
	std::cout << "======================================" << std::endl;
	Array<int>arrIntEmpty;

    Array<int>arrInt(5);
    try {
        for (int i = 0; i < 5; ++i) {
            arrInt[i] = i;
            std::cout << arrInt[i] << std::endl;
        }
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << KRED << "Size: " << KNRM << arrInt.size() << std::endl;
    std::cout << "======================================" << std::endl;
    Array<int>arrInt1(5);
    try {
        for (int i = 0; i < 100; ++i) {
            arrInt1[i] = i;
            std::cout << arrInt1[i] << std::endl;
        }
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << KRED << "Size: " << KNRM << arrInt1.size() << std::endl;
    std::cout << "======================================" << std::endl;
    Array<A>arrClass(5);
    try {
    	for (int i = 0; i < 5; ++i) {
    		arrClass[i].setN(i);
    		std::cout << arrClass[i] << std::endl;
    	}
    }
    catch (std::exception & e)
    {
    	std::cout << e.what() << std::endl;
    }
    std::cout << KRED << "Size: " << KNRM << arrClass.size() << std::endl;
    Array<A>arrClass1(5);
    try {
    	for (int i = 0; i < 20; ++i) {
    		arrClass1[i].setN(i);
    		std::cout << arrClass1[i] << std::endl;
    	}
    }
    catch (std::exception & e)
    {
    	std::cout << e.what() << std::endl;
    }
    std::cout << KRED << "Size: " << KNRM << arrClass1.size() << std::endl;
    std::cout << "======================================" << std::endl;
    Array<int>arrInt2(5);
    try {
    	for (int i = 0; i < 5; ++i) {
    		arrInt[i] = i + 2;
    		std::cout << arrInt[i] << std::endl;
    	}
    }
    catch (std::exception & e)
    {
    	std::cout << e.what() << std::endl;
    }
    std::cout << "======================================" << std::endl;
	try {
		Array<int>test1(5);
		Array<int>test2(5);
		for (int i = 0; i < 5; ++i) {
			test1[i] = i;
			std::cout << test1[i] << std::endl;
		}
		for (int i = 0; i < 5; ++i) {
			test2[i] = i + 2;
			std::cout << test2[i] << std::endl;
		}
		std::cout << "======================================" << std::endl;
		test1 = test2;
		for (int i = 0; i < 5; ++i) {
			std::cout << test1[i] << std::endl;
		}
		std::cout << "test 1: " << &test1 << std::endl;
		std::cout << "test 2: " << &test2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}