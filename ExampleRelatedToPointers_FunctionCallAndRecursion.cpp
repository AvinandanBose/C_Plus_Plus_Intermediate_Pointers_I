#include <iostream>
using namespace std;
int main()
{
    //Constant Pointer To An Integer(which is not constant)
    int i = 10;
    int *ptr1, *ptr2;
    ptr1 = &i;
    ptr2 = ptr1;
    cout<< "ptr_2 (i) = " <<*ptr2 <<endl;
    cout<< "ptr_1(i) = " << *ptr1 <<endl;
    return 0;
}