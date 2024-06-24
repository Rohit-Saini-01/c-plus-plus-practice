#include <iostream>

int main()
{
    float radius, height, volume;

    std::cout << "Enter the value of radius and height\n";
    std::cin >> radius >> height;

    volume = 3.14 * radius * radius * height;
    std::cout << "Volume is " << volume;

    return 0;
}
