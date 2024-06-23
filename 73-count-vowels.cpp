#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hourlwesbdfv euduivsdhjaslhior";

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }

    std::cout << count;
    return 0;
}