#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int num = 10;
    int *p = &num;

    *p += 5;

    cout<<"updated value of num: "<<num<<endl;

    return 0;

}
