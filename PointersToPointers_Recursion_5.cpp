/***** ****
 * Count of Digits
 * ******/
#include <iostream>
using namespace std;
int  CountOfDigits(int **, int **);
int main(){
    int n, i=0, *ptr1, *ptr2;
    cout << "Enter a number: ";
    cin >> n;
    ptr1 = &n;
    ptr2 = &i;
    cout << "Number of digits: " << CountOfDigits(&ptr1,&ptr2) << endl;
    
    return 0;
}
int CountOfDigits(int **n, int **sum){
    int temp_n = **n;
    int temp_sum = **sum;
    int *ptr_n;
    int *ptr_sum;
    
    if(temp_n== 0){
        return temp_sum;
    }

    int i = temp_n/10 ;
    int j = temp_sum+1;

    ptr_n = &i;
    ptr_sum = &j;

    CountOfDigits(&ptr_n, &ptr_sum);
   
    
}
