#include<iostream>
using namespace std;
int main()
{
    const float *ptrpi;
    float pi = 3.14f;
    float area = 0.14f; 
    ptrpi = &pi;
    cout<<"pi="<<*ptrpi<<endl;


    //Similarly 

    float const *ptrpi_1;
    float pi_1 = 3.14;
    ptrpi_1 = &pi_1;
    cout<<"pi="<<*ptrpi_1<<endl;


    return 0;
}
//Hence const <dataType>* <var>; is same as : <dataType> const * <var>;