//Reverse Of A  Number

#include<iostream>
using namespace std;
int main()
{
    int number, *temp;
    cout<<"Enter a number: ";
    cin>>*&number;
    *temp = number; // temp is a pointer variable holds the  number itself (not the address).
    int sum=0, digit;
    while(*&number!=0)
    {
        digit = *&number%10;
        *&sum = *&sum * 10 + digit;
        *&number=*&number/10;
        
    }
    cout<<"Reverse of :" <<*temp <<"is: " << sum;
    return 0;
}

