#include<iostream>
using namespace std;
int main()
{
    double *p, *q, *s, *d;
    int k =2;
    //Valid Pointer Arithmetic 
    cout<<"Address Value of p in double before operation is(1): "<<(int)p<<endl;
    cout<<"Address Value of p in hexadecimal before operation is(1): "<<p<<endl;

    p = p - 2;

    cout<<"Address Value of p in integer  after operation(1): "<<(int)p<<endl;
    cout<<"Address Value of p in hexadecimal  after operation(1): "<<p<<endl;

     //OPERATION***//
    /*****************************
     * initial integer address of p was 6422356
     * After p = p -2
     * i.e. 
     * it will shift two address behind i.e. as double's size is 8 bytes
     * hence 1st shift → 6422356 - 8 = 6422348
     * And Next Shift → 6422348 -8 = 6422340
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * ************************/

     p = p -k;

    cout<<"Address Value of p in integer  after operation(2): "<<(int)p<<endl;
    cout<<"Address Value of p in hexadecimal  after operation(2): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * p = p - k
     * i.e. Again p = p -2;
     * hence 1st shift → 6422340 - 8 = 6422332
     * AND next shift will be : 6422332-8 = 6422324
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * **************************/
    s = (double *)(p - s);
    cout<<"Address Value of s in integer after operation is :"<<(int)s<<endl;
    cout<<"Address Value of s in hexadecimal after operation is :"<<s<<endl;
    //OPERATION***//
    /*****************************
     * s = (double *)(p - s);
     * i.e. [(Address p = 6422324) - (Address of s = 4201552) ] ;
     * i.e. Simply ,6422324 - 4201552= 2220772 and divide by 8 to get the address of s
     * i.e. 2220772/8 = 277596.5 → 277596
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * 
     * Or
     * p = 6422324/8 = 802790.5 = 802790
     * q = 4201552/8 = 525194
     * Now substract : 802790 - 525194 = 277596
     * **************************/

    d= (double *)(p - s)+k; 
    cout<<"Address Value of d in integer after operation is :"<<(int)d<<endl;
    cout<<"Address Value of d in hexadecimal after operation is :"<<d<<endl;

    //OPERATION***//
    /*****************************
     * d = (double *)(p - s)+k;
     * i.e. [[(Address p = 6422324) - (Address of s = 277596)/8]+(k=2) ] ;
     * i.e. Simply ,6422324 - 277596 = 6144728
     * Then divide by 8 = 6144728 / 8 = 768091  
     * Now 768091 +2 i.e. 
     * 1st Shift : 768091+8 = 768099
     * 2nd Shift : 768099+8 = 768107
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * 
     * Or
     * p = 6422324/8 = 802790.5 → 802790
     * s = 277596/8 = 34699.5 = 34699
     * Substract = 802790 - 34699 = 768091
     * Now 768091+2 i.e. 
     * 1st Shift : 768091+8 = 768099
     * 2nd Shift : 768099+8 = 768107
     * Hence not much difference factors present in both the case.
     * **************************/

}