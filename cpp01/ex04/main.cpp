#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    char *filename;
    size_t i;

    if (argc != 4)
    {
        std::cout << "Usage: ./replace filename s1 s2" << std::endl;
        return 1;
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    filename = argv[1];
    std::ifstream in(filename);
    if (!in)
    {
        std::cout << "File error" << std::endl;
        return 1;
    }
    strcat(filename, ".replace");
    std::ofstream out(filename);
    std::string file = std::string(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
    while ((i = file.find(s1)) != std::string::npos)
    {
    	file.erase(i, s1.length());
    	file.insert(i, s2);
    }
    out << file;
    in.close();
    out.close();
}
