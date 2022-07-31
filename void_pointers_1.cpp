#include<iostream>
using namespace std;
int main(){
    void *vd_ptr;
    int *i_ptr;
    int invar=100;
    char chvar='A';
    float flvar=200.5f;
    double dlvar=350.45d;
    string str ="Hello World";
    vd_ptr = &invar;
    cout << "invar contains: " << *((int*)vd_ptr) << endl;
    vd_ptr = &chvar;
    cout << "chvar contains: " << *((char*)vd_ptr) << endl;
    vd_ptr = &flvar;
    cout << "chvar contains: " << *((float*)vd_ptr) << endl;
    vd_ptr = &dlvar;
    cout << "chvar contains: " << *((double*)vd_ptr) << endl;
    vd_ptr = &str;
    cout << "chvar contains: " << *((string*)vd_ptr) << endl;
    return 0;
}