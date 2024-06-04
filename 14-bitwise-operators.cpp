#include <iostream>

int main()
{
    int num1 = 5, num2 = 7, num3;
    num3 = num1 & num2;
    std::cout << num3 << "\n";
    num3 = num1 | num2;
    std::cout << num3 << "\n";
    num3 = num1 ^ num2;
    std::cout << num3 << "\n";
    num3 = ~num1;
    std::cout << num3 << "\n";
    num3 = num1 << 1;
    std::cout << num3 << "\n";
    num3 = num1 >> 1;
    std::cout << num3 << "\n";

    return 0;
}