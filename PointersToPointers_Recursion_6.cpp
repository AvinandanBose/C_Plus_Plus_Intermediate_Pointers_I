/***** ****
 * Count of Digits
 * ******/
#include <iostream>
using namespace std;
int  CountOfDigits(int **, int **);
int main(){
    int n, i=0, *ptr, *ptr_i, **ptrptr, **ptrptr_i;
    cout << "Enter a number: ";
    cin >> n;
    ptr = &n;
    ptr_i = &i;
    ptrptr = &ptr;
    ptrptr_i = &ptr_i;
    cout << "Number of digits: " << CountOfDigits(ptrptr,ptrptr_i) << endl;
    
    return 0;
}
int CountOfDigits(int **n, int **sum){
    if(**n== 0){
        return **sum;
    }
    **n = **n/10;
    **sum = **sum+1;
    CountOfDigits(n,sum);
   
    
}