// 2: Print all odd number from n to 1 using recursion

#include <iostream>
using namespace std;
void printOdd(int n)
{
    if (n == 0)
    {

        return;
    }
    if (n % 2 != 0)
    {
        cout << n << " ";
    }
    printOdd(n - 1);
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    printOdd(n);
}