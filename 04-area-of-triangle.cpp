#include <iostream>

int main()
{
    std::cout << "Enter the base and height of the triangle\n";
    float base, height, area;
    std::cin >> base >> height;
    area = (float)1 / 2 * base * height;
    std::cout << "Area of the triangle is " << area;
    return 0;
}