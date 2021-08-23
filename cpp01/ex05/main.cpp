#include "Karen.hpp"

int main()
{
    std::string karenNames[4] = {"Gloria", "Angel", "Virginia", "Perstephanie"};
    std::string complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; ++i) {
        Karen notHerAgain(karenNames[i]);
        notHerAgain.complain(complaints[i]);
    }
}