#include <iostream>

int main()
{
    float base, height, area;

    std::cout << "Enter the base and height of the triangle \n";
    std::cin >> base >> height;

    area = (base * height) / 2;

    std::cout << "Area of the triangle is " << area;

    return 0;
}
