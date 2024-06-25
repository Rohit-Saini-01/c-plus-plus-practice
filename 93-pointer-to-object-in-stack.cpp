#include<iostream>

class Rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r;
    Rectangle *ptr;
    
    ptr=&r;

    ptr->length=10;
    ptr->breadth=5;

    std::cout<<ptr->area()<<"\n";
    std::cout<<ptr->perimeter()<<"\n";

    return 0;
}