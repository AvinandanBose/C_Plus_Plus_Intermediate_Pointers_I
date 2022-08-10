#include<iostream>
using namespace std;
int main()
{
    int *p,*q, *s, *d;
    int num = 10, k = 2, x= 2, y = 2;
    p = &num;   // p points to num
    q = &k;
    s = &x; 
    d = &y;   
    //Valid Pointer Arithmetic  
    cout<<"Address Value of p in integer before operation is(1): "<<(int)p<<endl;
    cout<<"Address Value of p in hexadecimal before operation is(1): "<<p<<endl;

    p = p-2;

    cout<<"Address Value of p in integer  after operation(1): "<<(int)p<<endl;
    cout<<"Address Value of p in hexadecimal  after operation(1): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * initial integer address of p was 6422276
     * After p = p -2
     * i.e. 
     * it will shift two address behind i.e. as integer's size is 4 bytes
     * hence 1st shift → 6422276 - 4 = 6422272
     * And Next Shift → 6422272 -4 = 6422268
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * ************************/

    p = p -k;

    cout<<"Address Value of p in integer  after operation(2): "<<(int)p<<endl;
    cout<<"Address Value of p in hexadecimal  after operation(2): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * p = p - k
     * i.e. Again p = p -2;
     * hence 1st shift → 6422268 - 4 = 6422264
     * AND next shift will be : 6422264-4 = 6422260
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * **************************/
    cout<<"Address Value of s in integer before operation is: "<<(int)s<<endl;
    cout<<"Address Value of s in hexadecimal before operation is: "<<s<<endl;

    s = (int *)(p - s);

    cout<<"Address Value of s in integer after operation is :"<<(int)s<<endl;
    cout<<"Address Value of s in hexadecimal after operation is :"<<s<<endl;
    //OPERATION***//
    /*****************************
     * s = (int *)(p - s);
     * i.e. [(Address p = 6422256) - (Address of s = 6422264) ] ;
     * i.e. Simply ,6422256 - 6422264 = -8 and divide by 4 to get the address of s
     * i.e. -8/4 = -2
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * 
     * Or
     * p = 6422256/4 = 1605564 
     * q = 6422264/4 = 1605566
     * Now substract : 1605564 - 1605566 = -2 
     * **************************/
    d= (int *)(p - s)+k;
    cout<<"Address Value of d in integer after operation is :"<<(int)d<<endl;
     cout<<"Address Value of d in hexadecimal after operation is :"<<d<<endl;
    //OPERATION***//
    /*****************************
     * d = (int *)(p - s)+k;
     * i.e. [[(Address p = 6422252) - (Address of s = -2)/4]+(k=2) ] ;
     * i.e. Simply ,6422252 - (-2) = 6422254 + 2 = 6422256
     * Then divide by 4 = 6422256 / 4 = 1605564
     * Now 1605564 +2 i.e. 
     * 1st Shift : 1605564+4 = 1605568
     * 2nd Shift : 1605568+4 = 1605572
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * 
     * Or
     * p = 6422252/4 = 1605563
     * s = -2/4 = -0.5
     * Substract = 1605563 -0.5 = 1605562.5
     * We take nearest value i.e. 1605563
     * Now 1605563+2 i.e. 
     * 1st Shift : 1605563+4 = 1605567
     * 2nd Shift : 1605567+4 = 1605571
     * Hence not much difference factors present in both the case.
     * **************************/

    return 0;
}