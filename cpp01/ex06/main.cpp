# include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;

    if (argc != 2)
    {
        std::cout << "No complaints" << std::endl << "Usage: ./karenFilter \"message\"" << std::endl;
        return (1);
    }
    karen.complain(argv[1]);
}
