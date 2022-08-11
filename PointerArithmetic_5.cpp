#include<iostream>
using namespace std;
int main()
{
    short *p,*q, *s, *d;
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
     * it will shift two address behind i.e. as short 's size is 2 bytes
     * hence 1st shift → 6422356 - 2 = 6422354
     * And Next Shift → 6422354 -2 = 6422352
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * ************************/

    p = p -k;

    cout<<"Address Value of p in integer  after operation(2): "<<(int)p<<endl;
    cout<<"Address Value of p in hexadecimal  after operation(2): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * p = p - k
     * i.e. Again p = p -2;
     * hence 1st shift → 6422352 - 2 = 6422350
     * AND next shift will be : 6422350-2= 6422348
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * **************************/
    cout<<"Address Value of s in integer before operation is: "<<(int)s<<endl;
    cout<<"Address Value of s in hexadecimal before operation is: "<<s<<endl;

    s = (short *)(p - s);

    cout<<"Address Value of s in integer after operation is :"<<(int)s<<endl;
    cout<<"Address Value of s in hexadecimal after operation is :"<<s<<endl;
    //OPERATION***//
    /*****************************
     * s = (short *)(p - s);
     * i.e. [(Address p = 6422348) - (Address of s = 4201616) ] ;
     * i.e. Simply ,6422348 - 4201616 = 2220732 and divide by 2 to get the address of s
     * i.e. 2220732/2 = 1110366
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * 
     * Or
     * p = 6422348/2 = 3211174
     * q = 4201616/2 = 2100808
     * Now substract : 3211174 - 2100808 = 1110366
     * **************************/
    d= (short *)(p - s)+k;
    cout<<"Address Value of d in integer after operation is :"<<(int)d<<endl;
     cout<<"Address Value of d in hexadecimal after operation is :"<<d<<endl;
    //OPERATION***//
    /*****************************
     * d = (short *)(p - s)+k;
     * i.e. [[(Address p = 6422348) - (Address of s = 1110366)/2]+(k=2) ] ;
     * i.e. Simply ,6422348 - 1110366= 5311982 
     * Then divide by 2 = 5311982 / 2 = 2655991  
     * Now 2655991 +2 i.e. 
     * 1st Shift : 2655991+2 = 2655993
     * 2nd Shift : 2655993+2 = 2655995
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * 
     * Or
     * p = 6422348/2 = 3211174
     * s = 1110366/2 = 555183 
     * Substract = 3211174 -555183 = 2655991
     * Now 2655991+2 i.e. 
     * 1st Shift : 2655993+2 = 2655993
     * 2nd Shift : 2655993+2 = 2655995
     * Hence not much difference factors present in both the case.
     * **************************/

    return 0;
}