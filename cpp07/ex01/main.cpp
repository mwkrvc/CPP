# include "iter.hpp"

template<typename T>
void out(T const & x) {std::cout << x << std::endl; return;}


int main()
{
    int arrInt[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arrInt)/sizeof(arrInt[0]);
    std::cout << size << std::endl;
    n = size;
//    std::string arrStr[5] = {"one", "two", "three", "four", "five"};
//    double arrD[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
//
	iter(arrInt, 300, out);
//	iter(arrStr, 5, out);
//	iter(arrD, 5, out);
}

//int main()
//{
//	int arr[100]={1,2,3,4,5};
//	int size = sizeof(arr)/sizeof(arr[0]);
//	printf("%d", size);
//	return 1;
//}