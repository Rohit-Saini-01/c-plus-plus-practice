#include <iostream>

int main()
{
    float marks1, marks2, marks3, avg_marks;

    std::cout << "Enter the values of three subject marks\n";
    std::cin >> marks1 >> marks2 >> marks3;

    avg_marks = (marks1 + marks2 + marks3) / 3;

    if (avg_marks > 60)
        std::cout << "A";
    else if (avg_marks > 35 && avg_marks <= 60)
        std::cout << "B";
    else
        std::cout << "C";

    return 0;
}