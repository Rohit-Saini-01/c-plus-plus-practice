#include <iostream>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distance;
    std::cout << "Enter the abcissa and ordinate values of the two points\n";
    std::cin >> x1 >> y1 >> x2 >> y2;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    std::cout << "Distance between two points is " << distance;
    return 0;
}