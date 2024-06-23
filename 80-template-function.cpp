#include <iostream>

template<class T>

T add(T num_1, T num_2)
{
    return num_1 + num_2;
}


int main()
{
    std::cout << add(23, 43) << "\n";
    std::cout << add(1.2f, 1.4f) << "\n";
    return 0;
}