#include <iostream>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distance;
    std::cout << "Enter the value of x1,x2,y1 and y2 \n";
    std::cin >> x1 >> x2 >> y1 >> y2;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    std::cout<<"Distance is "<<distance;
    return 0;
}

// give me python equivalent code for this C++ code