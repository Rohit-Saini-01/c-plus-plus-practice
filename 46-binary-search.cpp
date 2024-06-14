#include <iostream>

int main()
{
    int n;

    std::cout << "Enter the value of n\n";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter elements of the array\n";

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int key, low = 0, high = n - 1;

    std::cout << "Enter the value of key\n";
    std::cin >> key;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            std::cout << "Found at " << mid;
            return 0;
        }
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }

    std::cout << "Key not found\n";

    return 0;
}
