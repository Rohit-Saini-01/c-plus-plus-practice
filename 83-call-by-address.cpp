#include <iostream>

int swap(int *var_1, int *var_2)
{
    std::cout << *var_1 << " " << *var_2 << "\n";

    int temp = *var_1;
    *var_1 = *var_2;
    *var_2 = temp;

    std::cout << *var_1 << " " << *var_2 << "\n";

    return 0;
}

int main()
{
    int var_1 = 10, var_2 = 20;
    swap(&var_1, &var_2);
    std::cout << var_1 << " " << var_2 << "\n";

    return 0;
}