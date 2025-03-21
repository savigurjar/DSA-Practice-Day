#include <iostream>
#include <cmath>  // For abs()
using namespace std;

void updateValues(int *a, int *b) {
    *a += *b;                     // Step 1
    *b = abs(*a - 2 * (*b));       // Step 2
}

int main() {
    int x = 5, y = 3;
    updateValues(&x, &y);
    cout << x << " " << y;
    return 0;
}
//  output
//  8 2