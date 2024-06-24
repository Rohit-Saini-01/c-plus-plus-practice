#include <iostream>

int var = 10;

int func()
{
    int var = 5;
    {
        int var = 2;
        std::cout << var << "\n";
    }

    std::cout << var << "\n";

    return 0;
}

int main()
{
    std::cout << var << "\n";
    
    func();

    return 0;
}