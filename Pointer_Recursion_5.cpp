/***** ****
 * Count of Digits
 * ******/
#include <iostream>
using namespace std;
int  CountOfDigits(int *, int *);
int main(){
    int n, i=0;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of digits: " << CountOfDigits(&n,&i) << endl;
    
    return 0;
}
int CountOfDigits(int *n, int *sum){
    int temp_n = *n;
    int temp_sum = *sum;
    if(temp_n== 0){
        return temp_sum;
    }
    int i = temp_n/10 ;
    int j = temp_sum+1;
    CountOfDigits(&i, &j);
   
    
}