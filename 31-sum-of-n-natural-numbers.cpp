#include <iostream>

int main()
{
    int num, sum = 0;

    std::cout << "Enter the value of n:\n";
    std::cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    std::cout << sum;

    return 0;
}
