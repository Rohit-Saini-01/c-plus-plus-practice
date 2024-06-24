#include <iostream>

int main()
{
    int num, sum;

    std::cout << "Enter the value of n \n";
    std::cin >> num;

    sum = (num * (num + 1)) / 2;
    std::cout << "Sum of first " << num << " natural numbers is " << sum;

    return 0;
}
