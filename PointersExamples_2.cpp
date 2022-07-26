//SumOfDigits 
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>*&number;
    int sum=0, digit;
    while(*&number!=0)
    {
        digit = *&number%10;
        sum = sum + digit;
        *&number=*&number/10;
        
    }
    cout<<"Sum of digit:" << sum;
    return 0;
}
