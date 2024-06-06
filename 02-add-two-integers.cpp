#include <iostream>
using namespace std;

int AddTwoIntegers(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}

int main()
{
    int num1, num2;
    cout << "Enter two integers \n";
    cin >> num1 >> num2;
    cout << "The sum of entered integers is " << AddTwoIntegers(num1, num2) << "\n";
    return 0;
}