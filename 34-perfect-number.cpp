#include <iostream>

int main()
{
    int num, sum = 0;

    std::cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == 2 * num)
        std::cout << "Perfect number";
    else
        std::cout << "Not a perfect number";

    return 0;
}

// give me python equivalent code for this C++ code