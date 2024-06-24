#include <iostream>

int max(int var_1, int var_2)
{
    if (var_1 > var_2)
        std::cout << var_1 << " is max\n";
    else
        std::cout << var_2 << " is max \n";

    return 0;
}

int min(int var_1, int var_2)
{
    if (var_1 < var_2)
        std::cout << var_1 << " is min\n";
    else
        std::cout << var_2 << " is min\n";

    return 0;
}

int main()
{
    int var_1, var_2;

    std::cout << "Enter two integers\n";
    std::cin >> var_1 >> var_2;

    int (*function_pointer)(int, int);

    function_pointer = max;
    (*function_pointer)(var_1, var_2);

    function_pointer = min;
    (*function_pointer)(var_1, var_2);

    return 0;
}