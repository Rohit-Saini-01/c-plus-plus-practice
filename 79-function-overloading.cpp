#include <iostream>

int add(int num_1, int num_2)
{
    return num_1 + num_2;
}

float add(float num_1, float num_2)
{
    return num_1 + num_2;
}

int main()
{
    std::cout << add(23, 43)<<"\n";
    std::cout << add(1.2f, 1.4f)<<"\n";
    return 0;
}