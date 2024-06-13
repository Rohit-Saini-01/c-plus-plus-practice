#include <iostream>

int main()
{
    int num, num_copy, digit, cubed_sum = 0;

    std::cout << "Enter a number\n";
    std::cin >> num;

    num_copy = num;

    while (num > 0)
    {
        digit = num % 10;
        num /= 10;
        cubed_sum += digit * digit * digit;
    }

    if (cubed_sum == num_copy)
    {
        std::cout << "Armstrong Number\n";
    }
    else
        std::cout << "Not an Armstrong Number\n";

    return 0;
}

// give me python equivalent code for this C++ code