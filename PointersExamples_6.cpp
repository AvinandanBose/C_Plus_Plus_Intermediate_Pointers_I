/*********
 * Prime Numbers through Pointer Functions 
 * ****************************************************************/
#include <iostream>
using namespace std;
int isPrime(int *);
int main(){
    int range;
    cout << "Enter a range:" << "\n";
    cin >> range;
    int *ptr = &range;
    for(int i =2; i<=*ptr; i++){
        int *ptr1 ;
        ptr1 = &i;
        int prime = isPrime(ptr1);
        if(prime ==0){
            cout << i << "\n";
        }
    }
    
    
    return 0;
}

int isPrime(int *num)
{
     int flag = 0;
     int *ptr = &flag ;
    for (int i = 2; i <= *num/2; i++)
   
    {
        if (*num % i == 0)
        {
            *ptr = *ptr + 1;
            break;
        }
    }
    return *ptr;
}