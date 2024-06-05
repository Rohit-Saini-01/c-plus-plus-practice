#include<iostream>

int main()
{
    int hour;
    std::cout<<"Enter the hour in 24hr format \n";
    std::cin>>hour;
    if(hour>=9 && hour<=18)
    {
        std::cout<<"Working hour \n";
    }
    else if(hour>=0 && hour <=24)
    {
        std::cout<<"Leisure hour \n";
    }
    else
    {
        std::cout<<"Enter a value between 0-24 \n";
    }
    return 0;
}