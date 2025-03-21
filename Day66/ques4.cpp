#include <iostream>
using namespace std;

void reverseString(char *str)
{
    char *end = str;
    while (*end)  // Move 'end' to the null terminator
    {
        end++;
    }
    end--;  // Move back to the last character (excluding '\0')

    while (str < end)  // Swap characters from start and end
    {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++, end--;
    }
}

int main()
{
    char myString[] = "Programming";
    reverseString(myString);
    cout << myString;
    return 0;
}

// output
// gnimmargorp