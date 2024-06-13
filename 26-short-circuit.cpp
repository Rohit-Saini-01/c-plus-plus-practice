#include <iostream>

int main()
{
    int var1 = 5, var2 = 3, i = 1;

    if (var1 < var2 && ++i < var2)
    {
    }
    std::cout << i << "\n";

    if (var1 > var2 || ++i < var2)
    {
    }
    std::cout << i;

    return 0;
}
