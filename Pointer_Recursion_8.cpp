/***** ****
 * Fibonacci Series  - Pointers & Recursion
 * ********************************/
#include <iostream>
using namespace std;
void fibonacci(int *, int *, int *);
int main(){
    int a =0, b = 1, range, *ptr_a, *ptr_b, *ptr_range ;
    
    cout << "Enter a range: ";
    cin >> range;
    cout << "Fibonacci series upto " << range << "\n";
    cout<< a<<"\n";
    cout<< b<<"\n";
    int i = range-2;//as 0 and 1 already over.
    ptr_a = &a;
    ptr_b = &b;
    ptr_range = &i;
    fibonacci(ptr_a,ptr_b,ptr_range); 
    
    return 0;
}
void fibonacci(int *a, int *b, int *range){
    
    if(*range == 0){
        return;
    }

    int sum = *a + *b;
    int *ptr_sum;
    ptr_sum = &sum;
    
    if(*ptr_sum>0){
        cout<< *ptr_sum<<"\n";

    }
    *range= *range -1;
    fibonacci(b,ptr_sum,range);
}