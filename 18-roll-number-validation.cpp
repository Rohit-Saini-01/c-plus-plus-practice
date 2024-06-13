#include <iostream>

int main()
{
    int roll_number;

    std::cout << "Enter your Roll_Number\n";
    std::cin >> roll_number;

    if (roll_number < 1)
        std::cout << "Invalid Roll Number\n";
    else
        std::cout << "Valid Roll Number\n";

    return 0;
}
