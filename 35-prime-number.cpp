#include <iostream>

int main()
{
    int num,counter=0;

    std::cout<<"Enter the value of num\n";
    std::cin>>num;

    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        counter++;
    }

    if(counter==2)
    std::cout<<"Prime number\n";
    else
    std::cout<<"Not a prime number\n";

    return 0;
}

// give me python equivalent code for this C++ code