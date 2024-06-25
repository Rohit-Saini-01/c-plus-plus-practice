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
    Rectangle r1, r2;
    
    r1.length=10;
    r1.breadth=5;
    std::cout<<r1.area()<<"\n";
    std::cout<<r1.perimeter()<<"\n";

    r2.length=15;
    r2.breadth=10;
    std::cout<<r2.area()<<"\n";
    std::cout<<r2.perimeter()<<"\n";

    return 0;
}