#include <iostream>

int main()
{
    int var = 10;
    int *p = &var;

    std::cout << var << "\n";
    std::cout << &var << "\n";
    std::cout << p << "\n";
    std::cout << &p << "\n";
    std::cout << *p << "\n";

    return 0;
}
