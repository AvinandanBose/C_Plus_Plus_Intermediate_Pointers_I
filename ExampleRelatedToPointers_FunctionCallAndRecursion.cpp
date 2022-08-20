#include <iostream>
using namespace std;
int main()
{
    //Constant Pointer To An Integer(which is not constant)
    int i = 10;
    int *ptr1, *ptr2, *ptr3;
    ptr1 = &i;//Assigning Address of variable i to pointer variable ptr1
    ptr2 = ptr1;//Assigning Address of Pointer Variable(ptr1) to Another(ptr2)
    ptr3 = ptr2;//Assigning Address of Pointer Variable(ptr2) to Another(ptr3)
    cout<< "ptr_2 (i) = " <<*ptr2 <<endl;//We get the value of i
    cout<< "ptr_1(i) = " << *ptr1 <<endl;//We get the value of i
    cout<< "ptr3(i) = " << *ptr3 <<endl;//We get the value of i
    return 0;
}