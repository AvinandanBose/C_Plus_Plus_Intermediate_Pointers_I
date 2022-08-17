/***** ****
 * Fibonacci Series  - Pointers & Recursion
 * ********************************/
#include <iostream>
using namespace std;
void fibonacci(int **, int **, int **);
int main(){
    int a =0, b = 1, range, *ptr1, *ptr2, *ptr3;
    ptr1 = &a;
    ptr2 = &b;
    cout << "Enter a range: ";
    cin >> range;
    cout << "Fibonacci series upto " << range << "\n";
    cout<< a<<"\n";
    cout<< b<<"\n";
    int i = range-2;//as 0 and 1 already over.
    ptr3 = &i;
    fibonacci(&ptr1,&ptr2,&ptr3); 
    
    return 0;
}
void fibonacci(int **a, int **b, int **range){
    int temp = **range;
    int *ptr_x;
    int *ptr_b;
    int *ptr_sum;
    if(temp == 0){
        return;
    }

    int sum = **a + **b;
    ptr_sum = &sum;
    if(sum>0){
        cout<< sum<<"\n";

    }
    int temp_b = **b;
    ptr_b = &temp_b;
    int x = (**range) -1;
    ptr_x = &x;
    fibonacci(&ptr_b,&ptr_sum,&ptr_x);
}