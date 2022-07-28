/***** ****
 * Fibonacci Series  - Pointers & Recursion
 * ********************************/
#include <iostream>
using namespace std;
void fibonacci(int *, int *, int *);
int main(){
    int a =0, b = 1, range;
    
    cout << "Enter a range: ";
    cin >> range;
    cout << "Fibonacci series upto " << range << "\n";
    cout<< a<<"\n";
    cout<< b<<"\n";
    int i = range-2;//as 0 and 1 already over.
    fibonacci(&a,&b,&i); 
    
    return 0;
}
void fibonacci(int *a, int *b, int *range){
    int temp = *range;
    if(temp == 0){
        return;
    }

    int sum = *a + *b;
    
    if(sum>0){
        cout<< sum<<"\n";

    }
    int temp_b = *b;
    int x = (*range) -1;
    fibonacci(&temp_b,&sum,&x);
}