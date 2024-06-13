#include <iostream>

int main()
{
    int num, fact=1;

    std::cout << "Enter the value of n:\n";
    std::cin >> num;

    for (int i = 1; i <= num; i++)
        fact *= i;

    std::cout << fact;

    return 0;
}

// give me python equivalent code for this C++ code