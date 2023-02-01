#include "Iter.hpp"
#include <iostream>
int main()
{
	std::string str[] = {"", "bc", "cd"};
    ::iter(str, 3, &myfun);
    int i[] = {1, 8, 5, 6, 7, 2};
    ::iter(i, 6, &myfun);
}