#include<iostream>
using namespace std;
int main()
{
    //Constant Pointer To An Integer(which is not constant)
    int i ,j=10;
    int* const pi = &i;
    *pi = 20;
    cout << *pi << endl;
     //pi = pi+1; (is not allowed)
    //pi = &j; (is not allowed)


    //Constant Pointer To A Constant Integer
    const int* const pj = &j;
    //*pj = 30;  (is not allowed).
    //pj = &i; (is not allowed).
    //pj = pj+1; (is not allowed).
    cout << *pj << endl;


return 0;
}