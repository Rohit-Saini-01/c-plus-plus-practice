#include <iostream>

int main()
{
    float hour;

    std::cout << "Enter hour\n";
    std::cin >> hour;

    if (hour >= 9 && hour <= 18)
        std::cout << "Working Hour\n";
    else
        std::cout << "Leisure Hour\n";

    return 0;
}
