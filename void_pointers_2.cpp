#include<iostream>
using namespace std;
int add (int , int);
int main(){
    cout << "add(10,20) = " << add(10,20) << endl;
    return 0;
}
int add (int a, int b){
    int c = a+b;
   void *vd_ptr;
    vd_ptr = &c;

    return *((int*)vd_ptr);
}
