#include <iostream>

class Rectangle
{

private:
    int length;
    int breadth;

public:

    int setLength(int len)
    {
        if (len >= 0)
        {
            length = len;
            return length;
        }
        else
        {
            std::cout << "Kindly re-run the program and enter length >=0\n";
            return 0;
        }
    }

    int setBreadth(int bre)
    {
        if (bre >= 0)
        {
            breadth = bre;
            return breadth;
        }
        else
        {
            std::cout << "Kindly re-run the program and enter breadth >=0\n";
            return 0;
        }
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r;

    r.setLength(10);
    r.setBreadth(5);

    std::cout<<r.getLength()<<"\n";
    std::cout<<r.getBreadth()<<"\n";
    std::cout<<r.perimeter()<<"\n";
    std::cout<<r.area()<<"\n";

    return 0;

}