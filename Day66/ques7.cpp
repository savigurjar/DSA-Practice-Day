#include <iostream>
using namespace std;

void foo(int *i, int *j) {
    *i = *i + *j;  // Step 1
    *j = *i - *j;  // Step 2
    *i = *i - *j;  // Step 3
}

int main() {
    int a = 4, b = 5;
    foo(&a, &b);
    cout << a << b; // Print swapped values
    return 0;
}
// output
// 5 4