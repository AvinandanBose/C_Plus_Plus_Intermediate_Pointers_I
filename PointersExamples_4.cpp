#include<iostream>
using namespace std;
int lengthOfDigits(int *);
int reverseOfDigits(int* , int *);

int main()
{
    int range; 
    cout<<"Enter a range: ";
    cin>>range;
    int len ; 
    int rev ; 
    for(int i =1; i<=range; i++)
    {
        
        int temp  = i;
        int temp2 = i;
        int temp3 = i;
        int *ptr = &temp; // ptr is a pointer variable that holds the address of temp.
        len = lengthOfDigits(ptr); // len is a variable that holds the length of the number.
        rev = reverseOfDigits(&temp2,&len); // rev is a variable that holds the reverse of the number.
        if(temp3 == rev){
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
int reverseOfDigits(int *num, int *s){
    int digit, sum = 0;
    for(int i=1; i<=*s; i++)
    {

        digit = *num%10;
        *&sum = *&sum * 10 + digit;
        *num=*num/10;
    }
    return *&sum;

}