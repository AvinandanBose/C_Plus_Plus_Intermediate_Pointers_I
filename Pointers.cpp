#include<iostream>
using namespace std;
int main()
{
    int i =10;

    int *p = &i;
    cout<< &i<<endl; // Address of i (such as: 0x61ff08)
    cout<< p<<endl; // P that hold the address of i ( 0x61ff08)
    cout<<*p<<endl; //Through dereferencing operation p fetches the value of i (10)
    return 0;
}
