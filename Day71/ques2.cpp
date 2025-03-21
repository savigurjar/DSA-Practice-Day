

// 2: How memory is deallocated in case of dynamically created 3D arrays in c++.

#include <iostream>
using namespace std;

int main()
{
    int x = 3, y = 4, z = 5;

    // Allocate memory
    int ***arr = new int **[x];
    for (int i = 0; i < x; i++)
    {
        arr[i] = new int *[y];
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = new int[z];
        }
    }

    // Use the array (example: assigning values)
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                arr[i][j][k] = i + j + k; // Sample values
            }
        }
    }

    // Print some values
    cout << "arr[2][3][4] = " << arr[2][3][4] << endl; // Example output

    // Deallocate memory (reverse order)
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            delete[] arr[i][j]; // Free rows
        }
        delete[] arr[i]; // Free 2D arrays
    }
    delete[] arr; // Free top-level array

    return 0;
}
