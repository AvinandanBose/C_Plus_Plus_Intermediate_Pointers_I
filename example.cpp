#include<iostream>
using namespace std;
int main()
{
   int i, *ptr_var;
    cout<<"Enter the value of i:"<<endl;
    cin>>i;
    ptr_var = &i;
    *ptr_var = *ptr_var+1;
    cout<<"The value of i is:"<<i<<endl;
    cout<<"The value of i is:"<<*ptr_var<<endl;
    return 0;
}