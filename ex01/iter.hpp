#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
void iter(T* arr, int len, void (*fun)(T& arr))
{
	for (int i = 0; i < len; i++)
		fun(arr[i]);
}

#endif
