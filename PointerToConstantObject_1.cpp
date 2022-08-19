#include<iostream>
using namespace std;
int main()
{
    const float *ptrpi;
    float pi = 3.14f;

    float area = 0.14f; 
    ptrpi = &pi;
    
    cout<<"pi="<<*ptrpi<<endl;

    //Can assign to another address of any object
    ptrpi = &area;
    cout<<"Value of area: "<<*ptrpi<<endl;
    cout<<"Value of area: "<<area<<endl;
    
    //Pointer Arithmetic is Possible
    cout<<"Integer Address of ptrpi "<<(int)ptrpi<<endl;
    cout<<"Corressponding Hex Address of ptrpi "<<ptrpi<<endl;
    ptrpi = ptrpi+1;
    cout<<"Integer Address of ptrpi after Arithmetic Operation:"<<(int)ptrpi<<endl;
    cout<<"Corressponding Hex Address of ptrpi after Arithmetic Operation:"<<ptrpi<<endl;
    
    //Can't change the value of constant object
    //*ptrpi = 10.14f; (is not allowed)




    //Similarly 

    float const *ptrpi_1;
    float pi_1 = 3.14;
    ptrpi_1 = &pi_1;
    cout<<"pi="<<*ptrpi_1<<endl;


    return 0;
}
//Hence const <dataType>* <var>; is same as : <dataType> const * <var>;