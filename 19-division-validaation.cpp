#include <iostream>

int main()
{
    float denominator, numerator, result;

    std::cout << "Enter the value of numerator and denominator\n";
    std::cin >> numerator >> denominator;

    if (denominator == 0)
        std::cout << "Divison by 0\n";
    else
        std::cout << numerator / denominator;

    return 0;
}
