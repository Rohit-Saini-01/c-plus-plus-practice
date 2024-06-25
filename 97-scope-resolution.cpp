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
    //     length = 0;
    //     breadth = 0;
    // }

    // PARAMETERISED CONSTRUCTOR
    Rectangle(int len, int bre);

    // COPY CONSTRUCTOR
    Rectangle(Rectangle &rect);

    int setLength(int len);

    int setBreadth(int bre);

    int getLength();

    int getBreadth();

    int area();

    int perimeter();
};

int main()
{

    Rectangle rect(10, 5);
    Rectangle rect_copy = Rectangle(rect);

    std::cout << rect.area() << "\n";
    std::cout << rect.perimeter() << "\n";

    std::cout << rect_copy.area() << '\n';
    std::cout << rect_copy.perimeter() << '\n';

    return 0;
}

int Rectangle::setLength(int len)
{
    if (len >= 0)
    {
        length = len;
        return 0;
    }
    else
    {
        std::cout << "Rerun the program and provide a value >= 0 \n";
        return 0;
    }
}

int Rectangle::setBreadth(int bre)
{
    if (bre >= 0)
    {
        breadth = bre;
        return 0;
    }
    else
    {
        std::cout << "Rerun the program and provide a value >= 0 \n";
        return 0;
    }
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int Rectangle::area()
{
    return length * breadth;
}

Rectangle::Rectangle(int len = 0, int bre = 0)
{
    length = len;
    breadth = bre;
}

Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.getLength();
    breadth = rect.getBreadth();
}