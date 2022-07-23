#include<iostream>
using namespace std;
int main()
{
    int i =10;

    int *p = &i;
    cout<< &i<<endl; // Address of i (such as: 0x61ff08)
    cout<< p<<endl; // P that hold the address of i ( 0x61ff08)
    cout<<*p<<endl; //Through dereferencing operation p fetches the value of i (10)

    // Same operation can be done using the following syntax:
    cout<< *&i << endl; //* will dereference the address of i and fetch the value of i(10) 
    return 0;
}