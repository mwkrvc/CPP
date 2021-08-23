
# include <iostream>
# include <cstdint>

struct Data {
	std::string name;
	std::string director;
	std::string language;
	int year;
	int runtime;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

std::ostream  & operator<<(std::ostream & o, Data * ptr)
{
	o << "name: " << ptr->name << std::endl << "director: " << ptr->director << std::endl << "language: " << ptr->language <<
		std::endl << "year:" << ptr->year << std::endl << "runtime: " << ptr->runtime << std::endl;
	return o;
}

int main()
{
	struct Data *film, a;
	struct Data *film1;

	a.name = "The Great Void";
	a.director = "Sebastian Mez";
	a.language = "German";
	a.runtime = 86;
	a.year = 2020;
	film = &a;
	std::cout << film;
	uintptr_t i = serialize(film);
	std::cout << i << std::endl;
	film1 = deserialize(i);
	std::cout << film1;
	return 0;
}