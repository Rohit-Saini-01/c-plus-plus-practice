#include <iostream>

int main()
{
    int n, sum;
    std::cout << "Enter the value of n\n";
    std::cin >> n;
    sum = n * (n + 1) / 2;
    std::cout << "Sum of first " << n << " natural numbers is " << sum;
    return 0;
}