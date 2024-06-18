#include <iostream>

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *p = A;

    std::cout << *p << std::endl;
    p++;
    std::cout << *p << std::endl;
    p--;
    std::cout << *p << std::endl;

    for(int i=0; i<5;i++)
    {
        std::cout << A[i] << std::endl;
        std::cout << i[A] << std::endl;
        std::cout << p[i] << std::endl;
        std::cout << *(p+i) << std::endl;
        std::cout << (p+i) << std::endl;
    }

    for(int i=0; i<5; i++)
    {
        std::cout << *p << std::endl;
        p++;
    }

    return 0;
}