// 1: Print “Coder Army” 10 times using recursion
#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);
    cout << "coder army" << " " << n << endl;
 
}
int main()
{
    int n = 10;
    print(n);
}