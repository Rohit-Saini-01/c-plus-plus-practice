#include <iostream>

int main()
{
    float height, radius, volume;
    std::cout << "Enter the height, radius of the cylinder\n";
    std::cin >> height >> radius;
    volume = (float)22 / 7 * radius * height;
    std::cout << "Volume of the entered cylinder is " << volume;
    return 0;
}