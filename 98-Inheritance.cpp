#include <iostream>

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int len, int bre);
    Rectangle(Rectangle &rect);

    int setLength(int len);
    int setBreadth(int bre);

    int getLength();
    int getBreadth();

    int perimeter();
    int area();
};

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int len, int bre, int hgt);

    int setHeight(int hgt);
    int getHeight();
    int volume();
};

// MAIN FUNCTION
int main()
{
    Cuboid cub(10, 5, 2);

    std::cout << cub.volume() << "\n";
    return 0;
}

Rectangle::Rectangle(int len = 0, int bre = 0)
{
    length = len;
    breadth = bre;
}

// RECTANGLE CLASS MEMBER FUNCTIONS
Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.getLength();
    breadth = rect.getBreadth();
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
        std::cout << "Kindly rerun the program and provide a value >= 0\n";
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
        std::cout << "Kindly rerun the program and provide a value >= 0\n";
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

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

// CUBOID CLASS MEMBER FUNCTIONS

Cuboid::Cuboid(int len = 0, int bre = 0, int hgt = 0) : Rectangle(len, bre)
{
    height = hgt;
    setLength(len);
    setBreadth(bre);
}

int Cuboid::setHeight(int hgt)
{
    if (hgt >= 0)
    {
        height = hgt;
        return 0;
    }
    else
    {
        std::cout << "Kindly re-run the program and provide a value >= 0\n";
        return 0;
    }
}

int Cuboid::getHeight()
{
    return height;
}

int Cuboid::volume()
{
    return getLength() * getBreadth() * getHeight();
}