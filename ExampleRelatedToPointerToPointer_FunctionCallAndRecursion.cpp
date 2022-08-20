#include <iostream>
using namespace std;
int main()
{
    //Constant Pointer To An Integer(which is not constant)
    int i = 10;
    int *ptr1;
    int **ptrptr1 , **ptrptr2,**ptrptr3;
    ptr1 = &i;//Assigning Address of variable i to pointer variable ptr1
    ptrptr1 = &ptr1;//Assigning Address of pointer variable ptr1 to Address of Pointer To Pointer's variable ptrptr1 
    ptrptr2 = ptrptr1;//Assigning Address of Pointer To Pointer's variable ptrptr1 to Address of Pointer To Pointer's variable ptrptr2 
    ptrptr3 = ptrptr2;//Assigning Address of Pointer To Pointer's variable ptrptr2 to Address of Pointer To Pointer's variable ptrptr3
    cout<< "ptrptr2(i) = " << **ptrptr2 <<endl;//We get the value of i
    cout<< "ptrptr1(i) = " << **ptrptr1 <<endl;//We get the value of i
    cout<< "ptrptr1(i) = " << **ptrptr3 <<endl;//We get the value of i
    return 0;
}