#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "Enter the value of two numbers\n";
    std::cin >> num1 >> num2;

    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    std::cout << "GCD of the two numbers is " << num1;

    return 0;
}
