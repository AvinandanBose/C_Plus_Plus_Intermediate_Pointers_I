#include<iostream>
using namespace std;
int lengthOfDigits(int **);

int main()
{
    int num, temp,*ptr;

    cout<<"Enter a number: ";
    cin>>num;
    temp = num;
    ptr = &num; // ptr is a pointer to num
    cout<<"The length of digits in "<<temp<<" is: "<<lengthOfDigits(&ptr)<<endl; 
    return 0;
   
}
int lengthOfDigits(int **number)
{
    int count=0;
    while(**number>0)
    {
        **number=**number/10;
        count++;
    }
    return count;
}