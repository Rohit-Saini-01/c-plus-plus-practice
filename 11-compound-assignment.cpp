#include <iostream>

int main()
{
    int num1, num2;
    std::cout << "ENter two numbers\n";
    std::cin >> num1 >> num2;
    num1 += num2;
    std::cout << num1<<"\n";
    num1 *= num2;
    std::cout << num1<<"\n";
    num1 -= num2;
    std::cout << num1<<"\n";
    num1 /= num2;
    std::cout << num1<<"\n";
}