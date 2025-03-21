#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   char arr[] = "hello";
   cout<<"Address of first index:"<<(void*)&arr[0]<<endl;
   return 0;
}