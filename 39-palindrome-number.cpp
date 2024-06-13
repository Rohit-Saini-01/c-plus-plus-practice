#include <iostream>

int main()
{
    int num, digit, rev_num = 0, num_copy;

    num_copy = num;

    std::cout << "Enter a number\n";
    std::cin >> num;

    while (num > 0)
    {
        digit = num % 10;
        num /= 10;
        rev_num = rev_num * 10 + digit;
    }

    if (rev_num == num_copy)
        std::cout << "Number is palindrome\n";
    else
        std::cout << "Number is not palindrome\n";

    return 0;
}
