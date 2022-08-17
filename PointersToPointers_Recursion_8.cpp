/***** ****
 * Fibonacci Series  - Pointers & Recursion
 * ********************************/
#include <iostream>
using namespace std;
void fibonacci(int **, int **, int **);
int main(){
    int a =0, b = 1, range, *ptr_a, *ptr_b, *ptr_range ;
    int **ptrptrA, **ptrptrB, **ptrptrRange;

    cout << "Enter a range: ";
    cin >> range;
    cout << "Fibonacci series upto " << range << "\n";
    cout<< a<<"\n";
    cout<< b<<"\n";
    int i = range-2;//as 0 and 1 already over.

    ptr_a = &a;
    ptr_b = &b;
    ptr_range = &i;

    ptrptrA = &ptr_a;
    ptrptrB = &ptr_b;
    ptrptrRange = &ptr_range;

    fibonacci(ptrptrA,ptrptrB,ptrptrRange); 
    
    return 0;
}

void fibonacci(int **a, int **b, int **range){
    
    if(**range == 0){
        return;
    }

    int sum = **a + **b;
    int *ptr_sum;
    int **ptrptr_sum;
    ptr_sum = &sum;
    ptrptr_sum = &ptr_sum;
    
    if(**ptrptr_sum>0){
        cout<< **ptrptr_sum<<"\n";

    }
    **range= **range -1;

    fibonacci(b,ptrptr_sum,range);
}