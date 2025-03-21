#include <iostream>
using namespace std;

void modifyString(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')  // Check if lowercase
        {
            *str = *str - 'a' + 'A';  // Convert to uppercase
        }
        str++;
    }
}

int main()
{
    char myString[] = "hello World";  // String stored in a modifiable array
    modifyString(myString);  // Convert lowercase letters to uppercase
    cout << myString;  // Print the modified string
    return 0;
}


// Output
// HELLLO WORLD