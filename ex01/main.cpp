#include "iter.hpp"

template <class T>
void fun(T& element)
{
	std::cout << element << std::endl;
}

int main()
{
	int mas[5] = {1, 2, 3, 4, 5};
	iter(mas, 5, &fun);
}
