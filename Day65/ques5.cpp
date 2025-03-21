#include <iostream>
using namespace std;

bool isPalindrome(const char *str) {
    int left = 0;
    int right = 0;
    
    // Find length of the string
    while (str[right] != '\0') {
        right++;
    }
    right--;  // Move to last valid character (excluding '\0')

    // Two-pointer approach
    while (left < right) {
        if (str[left] != str[right]) {
            return false;  // Not a palindrome
        }
        left++;
        right--;
    }
    return true;  // Palindrome
}

int main() {
    const char *palindrome1 = "level";
    const char *palindrome2 = "hello";

    cout << "Is '" << palindrome1 << "' a palindrome? " 
         << (isPalindrome(palindrome1) ? "Yes" : "No") << endl;

    cout << "Is '" << palindrome2 << "' a palindrome? " 
         << (isPalindrome(palindrome2) ? "Yes" : "No") << endl;

    return 0;
}
