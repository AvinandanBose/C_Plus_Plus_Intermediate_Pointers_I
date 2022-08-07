#include <iostream>
using namespace std;
void fibonacci(void *, void *, void *);
int main(){
    int a =0, b = 1, range ;
    
    cout << "Enter a range: ";
    cin >> range;
    cout << "Fibonacci series upto " << range << "\n";
    cout<< a<<"\n";
    cout<< b<<"\n";
    int i = range-2;//as 0 and 1 already over.
    
    fibonacci(&a,&b,&i); 
    
    return 0;
}
void fibonacci(void *a, void *b, void *range){
    int temp = *((int*)range);
    void *ptr_sum;

    if(temp == 0){
        return;
    }

    int sum = *((int*)a) + *((int*)b);
    
    
    if(sum>0){
        cout<< sum<<"\n";

    }
    ptr_sum = &sum;
    *((int*)range)= *((int*)range) -1;
    fibonacci((int*)b,(int*)ptr_sum,(int*)range);
}