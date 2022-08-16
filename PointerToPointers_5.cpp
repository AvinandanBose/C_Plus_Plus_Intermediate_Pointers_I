#include<iostream>
using namespace std;
int lengthOfDigits(int **);
int reverse(int **);
int main()
{
    int num , temp, temp1;
    int *ptr;
    cout << "Enter the number :" << endl;
    cin >> num;
    temp = num;
    ptr = &num;
    int rev = reverse(&ptr);
    cout << "Reverse of " << temp << " is: " << rev << endl;
    if(temp == rev){
        cout << "The number " <<temp <<" is palindrome" << endl;
    }
    else{
        cout << "The number " <<temp <<" is not palindrome" << endl;
    }
    return 0;
}

int lengthOfDigits(int **number)
{
    int count=0;
    int *ptr_new = &count ;
    int **ptriptr = &ptr_new ;
    
    while(**number>0)
    {
        **number=**number/10;
        **ptriptr = **ptriptr + 1;
    }
    return **ptriptr;
}
int reverse(int **ptrptr)
{
    int temp = **ptrptr;
    int digit,sum = 0;
    int len = lengthOfDigits(ptrptr); //Now ptrptr becomes zero 0.
    for(int i=1; i<=len ; i++)
    {

        digit = temp%10;
        sum = sum * 10 + digit;
        temp=temp/10;
    }
    
    return sum;
}