#include <iostream>

int *func()
{
    int *ptr = new int[5];

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = 5 * i;
    }
    return ptr;
}

int main()
{
    int *p = func();

    for (int i = 0; i < 5; i++)
    {
        std::cout << *(p+i) << std::endl;
    }

    return 0;
}