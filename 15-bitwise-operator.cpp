#include <iostream>

int main()
{
    char var1 = 5, result;
    int var2 = 11, var3 = 7, result2;

    result = ~var1;
    std::cout << (int)result << "\n";

    result = var1 << 1;
    std::cout <<(int) result << "\n";

    result = var1 >> 1;
    std::cout << (int)result << "\n";

    result2 = var2 & var3;
    std::cout << result2 << "\n";

    result2 = var2 | var3;
    std::cout << result2 << "\n";

    result2 = var2 ^ var3;
    std::cout << result2 << "\n";

    return 0;
}

// give me python equivalent code for this C++ code