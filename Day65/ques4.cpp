#include <iostream>
using namespace std;

int calculateLength(const char *str) {
    int length = 0;

    // Iterate through the string until the null character (`\0`) is found
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    const char *myString = "Hello, World!";
    cout << "Length of the string: " << calculateLength(myString) << endl;
    return 0;
}
