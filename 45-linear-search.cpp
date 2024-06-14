#include <iostream>

int main()
{
    int n;

    std::cout << "Enter the value of n\n";
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int key;

    std::cout << "Enter the key you want to search\n";
    std::cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            std::cout << "Found at " << i << "\n";
            return 0;
        }
    }

    std::cout << "Not found";

    return 0;
}
