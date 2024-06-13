#include <iostream>

int main()
{
    int num;

    std::cout << "Enter the value of n:";
    std::cin >> num;
    {
        int i = 1;
        while (i <= num)
        {
            std::cout << i << std::endl;
            i++;
        }
    }
    {
        int i = 1;
        do
        {
            std::cout << i << std::endl;
            i++;
        } while (i <= num);
    }

    return 0;
}

// give me python equivalent code for this C++ code