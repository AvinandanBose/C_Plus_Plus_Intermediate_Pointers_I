#include <iostream>
using namespace std;
int isPrime(int **);
int main(){
    int num;
    cout << "Enter a number:" << "\n";
    cin >> num;
    int *ptr = &num;
    int **ptriptr = &ptr;
    if(isPrime(ptriptr)==0) // or isPrime(&ptr)
    {
        cout << "The number " << num << " is prime" << endl;
    }
    else{
        cout << "The number " << num << " is not prime" << endl;
    }
    
    
    return 0;
}

int isPrime(int **num)
{
     int flag = 0;
     int *ptr = &flag ;
     int **ptriptr = &ptr ; 
    for (int i = 2; i <= **num/2; i++)
   
    {
        if (**num % i == 0)
        {
            **ptriptr = **ptriptr + 1;
            break;
        }
    }
    return **ptriptr;
}