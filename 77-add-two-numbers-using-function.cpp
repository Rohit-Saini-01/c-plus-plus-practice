#include <iostream>

float add(float num_1, float num_2)
{
    return num_1+num_2;
}

int main()
{
    float num_1=2.3,num_2=7.9,sum;

    sum=add(num_1,num_2);
    std::cout<<sum;
    
    return 0;
}