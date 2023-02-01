#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
template <typename T> void myfun(T test)
{
    std::cout << test << std::endl;
}
template <typename T> void iter(T *add, int size, void (*ptr)(T))
{
    int i = 0;
    while (i < size)
    {
        ptr(add[i]);
        i++;
    }
} 

#endif