#include <iostream>

int main()
{
    float radius, area;

    std::cout << "Enter the value of radius \n";
    std::cin >> radius;

    area = 3.14 * radius * radius;
    std::cout << "Area of the circle with radius " << radius << " is " << area;

    return 0;
}