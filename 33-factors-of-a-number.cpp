#include <iostream>

int main()
{
    int num;

    std::cout << "Enter the value of num\n";
    std::cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            std::cout << i << "\n";
    }

    return 0;
}
