// 3: Print all numbers from 1 to n using recursion.

#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    print(n - 1);
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    print(n);
}