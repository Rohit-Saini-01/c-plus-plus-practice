#include <iostream>

int main()
{
    float num1, num2;

    std::cout << "Enter two numbers\n";

    std::cin >> num1 >> num2;

    if (num1 > num2)
        std::cout << "Max is " << num1;
    else
        std::cout << "Max is " << num2;

    return 0;
}
