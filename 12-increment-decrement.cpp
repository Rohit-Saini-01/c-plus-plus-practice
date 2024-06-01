#include <iostream>

int main()
{
    int num1;
    std::cout << "Enter a number you want to experiment increment decrement operator on\n";
    std::cin >> num1;
    std::cout << "num1++\n"
              << num1++ << "\n";
    std::cout << "num1--\n"
              << num1-- << "\n";
    std::cout << "++num1\n"
              << ++num1 << "\n";
    std::cout << "--num1\n"
              << --num1 << "\n";
    return 0;
}