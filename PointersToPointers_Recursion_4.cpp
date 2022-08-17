/***** ****
 * Sum of Numbers
 * ******/

#include <iostream>
using namespace std;
void sumOfNumbers(int **,int **, int **);
int main(){
    int range, i=1,j=0, *ptr1, *ptr2, *ptr3;
    int **ptrptr1, **ptrptr2, **ptrptr3;
    cout << "Enter a range: ";
    cin >> range;
    ptr1 = &range;
    ptr2 = &i;
    ptr3 = &j;
    ptrptr1 = &ptr1;
    ptrptr2 = &ptr2;
    ptrptr3 = &ptr3;
    sumOfNumbers(ptrptr2 ,ptrptr1,ptrptr3);
    return 0;
}
void sumOfNumbers(int **i,int **range, int **sum){  
    if(**i == **range){
        **sum = **sum + **i;
        cout << "Sum of numbers: " << **sum << "\n";
        return;
    }
    **sum = **sum + **i;
    **i = **i + 1;
    sumOfNumbers(i,range,sum);
}
