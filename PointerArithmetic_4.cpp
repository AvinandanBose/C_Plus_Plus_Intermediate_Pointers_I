#include<iostream>
using namespace std;
int main()
{
    float *p,*q, *s, *d;
    int  k = 2;
    
       
    //Valid Pointer Arithmetic  
    cout<<"Address Value of p in integer before operation is(1): "<<(int)p<<endl;
    cout<<"Address Value of p in hexadecimal before operation is(1): "<<p<<endl;

    p = p-2;

    cout<<"Address Value of p in integer  after operation(1): "<<(int)p<<endl;
    cout<<"Address Value of p in hexadecimal  after operation(1): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * initial integer address of p was 6422356
     * After p = p -2
     * i.e. 
     * it will shift two address behind i.e. as floats 's size is 4 bytes
     * hence 1st shift → 6422356 - 4 = 6422352
     * And Next Shift → 6422352 -4 = 6422348
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * ************************/

    p = p -k;

    cout<<"Address Value of p in integer  after operation(2): "<<(int)p<<endl;
    cout<<"Address Value of p in hexadecimal  after operation(2): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * p = p - k
     * i.e. Again p = p -2;
     * hence 1st shift → 6422348 - 4 = 6422344
     * AND next shift will be : 6422344-4 = 6422340
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * **************************/
    cout<<"Address Value of s in integer before operation is: "<<(int)s<<endl;
    cout<<"Address Value of s in hexadecimal before operation is: "<<s<<endl;

    s = (float *)(p - s);

    cout<<"Address Value of s in integer after operation is :"<<(int)s<<endl;
    cout<<"Address Value of s in hexadecimal after operation is :"<<s<<endl;
    //OPERATION***//
    /*****************************
     * s = (float *)(p - s);
     * i.e. [(Address p = 6422340) - (Address of s = 4201632) ] ;
     * i.e. Simply ,6422340 - 4201632 = 2220708 and divide by 4 to get the address of s
     * i.e. 2220708/4 = 555177
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * 
     * Or
     * p = 6422256/4 = 1605585
     * q = 4201632/4 = 1050408
     * Now substract : 1605585 - 1050408 = 555177
     * **************************/
    d= (float *)(p - s)+k;
    cout<<"Address Value of d in integer after operation is :"<<(int)d<<endl;
     cout<<"Address Value of d in hexadecimal after operation is :"<<d<<endl;
    //OPERATION***//
    /*****************************
     * d = (float *)(p - s)+k;
     * i.e. [[(Address p = 6422340) - (Address of s = 555177)/4]+(k=2) ] ;
     * i.e. Simply ,6422340 - 555177 = 5867163 
     * Then divide by 4 = 5867163 / 4 = 1466790.75  = 1466791
     * Now 1466791 +2 i.e. 
     * 1st Shift : 1466791+4 = 1466795
     * 2nd Shift : 1466795+4 = 1466799
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * 
     * Or
     * p = 6422340/4 = 1605585
     * s = 555177/4 = 138794.25 = 138794
     * Substract = 1605585 -138794 = 1466791
     * Now 1466791+2 i.e. 
     * 1st Shift : 1466791+4 = 1466795
     * 2nd Shift : 1466795+4 = 1466799
     * Hence not much difference factors present in both the case.
     * **************************/

    return 0;
}