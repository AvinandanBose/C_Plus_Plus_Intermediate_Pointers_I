/***** ****
 * Factorial of a number 
 * ********************************/
#include<iostream>
using namespace std;
int calcFactorial(int **);
int main(){
    int num,*ptr_num , **ptrptr_num ;
    cout << "Enter a number: ";
    cin >> num;
    int incr_num = num+1;
    ptr_num = &incr_num;
    ptrptr_num = &ptr_num;
    cout << "Factorial of " << num << " is: " << calcFactorial(ptrptr_num) << endl;
    
    return 0;
}
int calcFactorial(int **n){
    if(**n==1 || **n == 0){
        return 1;
    }
    **n = **n-1;
    return **n *calcFactorial(n); 
}