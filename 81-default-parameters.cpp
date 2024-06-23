#include <iostream>

int add(int num_1, int num_2, int num_3 = 0)
{
    return num_1 + num_2 + num_3;
}

float add(float num_1, float num_2)
{
    return num_1 + num_2;
}

int main()
{
    std::cout << add(23, 43) << "\n";
    std::cout<<add(23,43,53)<<"\n";
    
    return 0;
}