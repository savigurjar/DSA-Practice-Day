#include <iostream>
#include <cctype>  // For tolower() and isalpha()
using namespace std;

void countVowelsAndConsonants(const char *str, int &vowels, int &consonants) {
    vowels = consonants = 0;

    while (*str) {
        char ch = tolower(*str);  // Convert character to lowercase
        if (isalpha(ch)) {  // Check if it is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;  // Increment vowel count
            } else {
                consonants++;  // Increment consonant count
            }
        }
        str++;  // Move to the next character
    }
}

int main() {
    const char *text = "Hello, World!";
    int numVowels, numConsonants;
    countVowelsAndConsonants(text, numVowels, numConsonants);
    cout << "Vowels: " << numVowels << ", Consonants: " << numConsonants;
    return 0;
}
// output
// vowel : 3, consonants:7