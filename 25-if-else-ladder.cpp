#include <iostream>

int main()
{
    int day;

    std::cout << "Enter day number\n";
    std::cin >> day;

    if (day == 1)
        std::cout << "Monday";
    else if (day == 2)
        std::cout << "Tuesday";
    else if (day == 3)
        std::cout << "Wednesday";
    else if (day == 4)
        std::cout << "Thursday";
    else if (day == 5)
        std::cout << "Friday";
    else if (day == 6)
        std::cout << "Saturday";
    else if (day == 7)
        std::cout << "Sunday";
    else
        std::cout << "Invalid day number";

    return 0;
}

// give me python equivalent code for this C++ code