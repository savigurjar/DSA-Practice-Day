#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[4];
    cout<<"array element in reverse order "<<endl;
    for(int i=4;i>=0;i--)
    {
        cout<<*ptr<<" ";
        ptr--;
    }
    return 0;
}