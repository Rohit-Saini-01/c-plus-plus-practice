#include <iostream>

float maximum(float num_1, float num_2, float num_3)
{
    if (num_1 > num_2 && num_1 > num_3)
        return num_1;
    else if (num_2 > num_3)
        return num_2;
    else
        return num_3;
}

int main()
{
    float num_1=7.2,num_2=10.43,num_3=15,max;

    max=maximum(num_1,num_2,num_3);
    std::cout<<max;
    
    return 0;
}