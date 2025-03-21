// Dynamically create 4D arrays in C++.
#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    // Dynamic Memory Allocation for 4D Array
    int ****ptr = new int ***[A];
    for (int i = 0; i < A; i++)
    {
        ptr[i] = new int **[B];
        for (int j = 0; j < B; j++)
        {
            ptr[i][j] = new int *[C];
            for (int k = 0; k < C; k++)
            {
                ptr[i][j][k] = new int[D];
            }
        }
    }

    // Initialize the 4D Array
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < C; k++)
            {
                for (int l = 0; l < D; l++)
                {
                    ptr[i][j][k][l] = i + j + k + l;
                }
            }
        }
    }

    // Print the 4D Array
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < C; k++)
            {
                for (int l = 0; l < D; l++)
                {
                    cout << ptr[i][j][k][l] << " ";
                }
                cout << endl; // Newline for better readability
            }
            cout << endl; // Separate blocks of 2D arrays
        }
        cout << endl; // Separate 3D arrays
    }

    // Proper Memory Deallocation
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < C; k++)
            {
                delete[] ptr[i][j][k]; // Delete innermost arrays
            }
            delete[] ptr[i][j]; // Delete 2D arrays
        }
        delete[] ptr[i]; // Delete 3D arrays
    }
    delete[] ptr; // Delete outermost array

    return 0;
}
