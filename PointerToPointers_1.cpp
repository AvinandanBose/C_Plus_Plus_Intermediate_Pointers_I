#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int **ptrptr;
    int data;
    ptr = &data;
    ptrptr = &ptr;
    cout<<"Enter the data: ";
    cin>>data;
    cout<<"The address of data is: "<<ptr<<endl;
    cout<<"The address of ptr is: "<<ptrptr<<endl;
    cout<<"The value of data is: "<<data<<endl;
    cout<<"The value of data is: "<<*ptr<<endl;
    cout<<"The value of data is: "<<**ptrptr<<endl;
    
    return 0;
}