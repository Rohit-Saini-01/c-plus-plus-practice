#include <iostream>

int main()
{
    float age;

    std::cout << "Enter Age\n";
    std::cin >> age;

    if (age <= 12 || age >= 50)
        std::cout << "Eligible\n";
    else
        std::cout << "Not Eligible\n";

    return 0;
}

// give me python equivalent code for this C++ code