# include "Point.hpp"

int main()
{
    Point a = Point(1, 1);
    Point b = Point(7, 1);
    Point c = Point(3, 5);
    Point p = Point(7, 1);
    bool yes = bsp(a, b, c, p);
    std::cout << yes << std::endl;
}