#include<iostream>
using namespace std;
int add (int , int);
int main(){
    cout << "add(10,20) = " << add(10,20) << endl;
    return 0;
}
int add (int a, int b){
   void *vd_ptr;
    void *vd_ptr1;
    vd_ptr = &a;
    vd_ptr1 = &b;
    return *((int*)vd_ptr)+ *((int*)vd_ptr1);
}