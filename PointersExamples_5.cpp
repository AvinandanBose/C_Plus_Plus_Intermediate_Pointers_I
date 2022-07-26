#include<iostream>
using namespace std;
int lengthOfDigits(int *);
int reverseOfDigits(int* );
int main()
{
    int range; 
    cout<<"Enter a number: ";
    cin>>range;
    int len ; 
    int rev ; 
    for(int i =1; i<=range; i++)
    {
        int temp  = i;
        int temp2 = i;
        int *ptr = &temp; // ptr is a pointer variable that holds the address of temp.
        rev = reverseOfDigits(ptr); // rev is a variable that holds the reverse of the number.
        if(temp2 == rev){
            cout<< i << "\n";
        }
    
    }
    
    
}
int lengthOfDigits(int *number)
{
    int count=0;
    while(*number>0)
    {
        *number=*number/10;
        count++;
    }
    return count;
}
int reverseOfDigits(int *num){
    int temp = *num;
    int len = lengthOfDigits(num);
    int digit, sum = 0;
    for(int i=1; i<=len ; i++)
    {

        digit = temp%10;
        *&sum = *&sum * 10 + digit;
        temp=temp/10;
    }
    return *&sum;

}