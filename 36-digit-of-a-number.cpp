#include <iostream>

int main()
{
    int num, digit;

    std::cout << "Enter a number\n";
    std::cin >> num;

    while (num > 0)
    {
        digit = num % 10;
        num /= 10;
        std::cout << digit << "\n";
    }

    return 0;
}

// give me python equivalent code for this C++ code