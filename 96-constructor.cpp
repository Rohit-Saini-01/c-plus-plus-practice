#include <iostream>

class Rectangle
{

private:
    int length;
    int breadth;

public:
    // Default Constructor
    // Rectangle()
    // {
    //     setLength(0);
    //     setBreadth(0);
    // }

    // PARAMETERISED CONSTRUCTOR
    Rectangle(int len = 0, int bre = 0)
    {
        setLength(len);
        setBreadth(bre);
    }

    // COPY CONSTRUCTOR
    Rectangle(Rectangle &rect)
    {
        length = rect.getLength();
        breadth = rect.getBreadth();
    }

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
    Rectangle rect(10, 5);
   Rectangle rect_copy= Rectangle(rect);

    std::cout<<rect.area()<<"\n";
    std::cout<<rect.perimeter()<<"\n";

    std::cout<<rect_copy.area()<<'\n';
    std::cout<<rect_copy.perimeter()<<'\n';

    
    return 0;
}