#include<iostream>
using namespace std;
int add (void * , void *);
int main(){
    int a=10,b=20;
    cout << "add(10,20) = " << add(&a,&b) << endl;
    return 0;
}
int add (void *vd_ptr, void *vd_ptr1){
    
    return *((int*)vd_ptr)+ *((int*)vd_ptr1);
}