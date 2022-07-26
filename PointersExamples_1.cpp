//Length of Digits 
#include<iostream>
using namespace std;
int main()
{
    int number, *ptr;
    cout<<"Enter a number: ";
    cin>>number;
    ptr=&number;
    int count=0;
    while(*ptr>0)
    {
        *ptr=*ptr/10;
        count++;
    }
    cout<<"The number of digits in the number are: "<<count;
    return 0;
}