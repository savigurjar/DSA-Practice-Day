// 1: What is the difference between static memory allocation and dynamic memory allocations?
/*
#include <iostream>
using namespace std;

int main() {
    int arr[5];  // Fixed size, allocated at compile-time
    arr[0] = 10;
    cout << "First element: " << arr[0] << endl;
    return 0;
}*/

/*
#include <iostream>
using namespace std;

int main() {
    int *arr = new int[5];  // Allocated on heap
    arr[0] = 10;
    cout << "First element: " << arr[0] << endl;

    delete[] arr;  // Must be deallocated manually
    return 0;
}*/
