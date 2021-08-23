#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return 0;
	}
	Convert scl(argv[1]);
	scl.casts();
}