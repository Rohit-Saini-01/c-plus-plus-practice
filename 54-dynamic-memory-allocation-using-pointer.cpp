#include <iostream>

int main()
{
    int *p = new int[5];

    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[4]=4;

    std::cout<<p[0]<<std::endl;
    std::cout<<p[1]<<std::endl;
    std::cout<<p[2]<<std::endl;
    std::cout<<p[3]<<std::endl;
    std::cout<<p[4]<<std::endl;

    delete []p;
    p=nullptr;

    return 0;
}