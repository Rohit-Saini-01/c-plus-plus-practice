#include <iostream>

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
    Rectangle *p=new Rectangle;

    p->length=15;
    p->breadth=10;

    std::cout<<p->area()<<"\n";
    std::cout<<p->perimeter()<<"\n";

    return 0;
}