#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "arr: " << arr << std::endl;
    cout << "&arr: " << &arr << std::endl;

    cout << "arr + 1: " << arr + 1 << std::endl;  // Points to second element
    cout << "&arr + 1: " << &arr + 1 << std::endl;  // Moves by the size of the entire array

    return 0;
}

/*
Understanding arr

1.arr represents the base address of the array.
2.It is implicitly converted to a pointer to the first element (int*).
3.arr == &arr[0] (i.e., arr points to the first element).


Understanding &arr

1.&arr gives the address of the entire array.
2.It is of type int(*)[5] (pointer to an array of 5 integers).
3.This means &arr points to the entire block of memory allocated for the array.*/