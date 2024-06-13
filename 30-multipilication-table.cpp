#include <iostream>

int main()
{
    int num;

    std::cout << "Enter the value of n:\n";
    std::cin >> num;

    for (int i = 1; i <= 10; i++)
        std::cout << num << " X " << i << " = " << num * i << "\n";

    return 0;
}
