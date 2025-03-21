#include <iostream>
using namespace std;

void concatenateAndPrint(char *str1, const char *str2)
{
    while (*str1) // Move str1 pointer to the end of the first string
    {
        str1++;
    }

    while ((*str1 = *str2)) // Copy characters from str2 to str1
    {
        str1++, str2++;
    }
}

int main()
{
    char first[] = "Good";   // first = ['G', 'o', 'o', 'd', '\0']
    const char second[] = "Morning";  // second = ['M', 'o', 'r', 'n', 'i', 'n', 'g', '\0']
    concatenateAndPrint(first, second);
    cout << first;
    return 0;
}

// output
// GoodMorning

// and why 
