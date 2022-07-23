#include<iostream>
using namespace std;
int main(){
    int *ptr1, *ptr2 , *ptr3, a, b, sum;
    ptr1 = &a; 
    ptr2 = &b;
    ptr3 = &sum;
    *ptr1 = 20; 
    *ptr2 = 30;
    *ptr3 = *ptr1 + *ptr2;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
}