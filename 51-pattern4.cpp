#include <iostream>

int main()
{
    int n;

    std::cout << "enter the value of n \n";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n)
                std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
