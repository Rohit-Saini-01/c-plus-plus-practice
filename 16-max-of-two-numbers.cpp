#include <iostream>

int main()
{
    int num1, num2;
    std::cout << "Enter two integers\n";
    std::cin >> num1 >> num2;
    if (num1 > num2)
    {
        std::cout << "Max is " << num1;
    }
    else
    {
        std::cout << "Max is " << num2 << " or the numbers are equal";
    }
    return 0;
}