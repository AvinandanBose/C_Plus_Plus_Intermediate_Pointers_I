#include<iostream>
using namespace std;
int main()
{
    char *p,*q, *s, *d;
    int  k = 2;
    
       
    //Valid Pointer Arithmetic  
    cout<<"Address Value of p in integer before operation is(1): "<<(int)p<<endl;
    cout<<"Address Value of p in ASCII character before operation is(1): "<<p<<endl;

    p = p-2;

    cout<<"Address Value of p in integer  after operation(1): "<<(int)p<<endl;
    cout<<"Address Value of p in ASCII character after operation(1): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * initial integer address of p was 6422356
     * After p = p -2
     * i.e. 
     * it will shift two address behind i.e. as char 's size is 1 bytes
     * hence 1st shift → 6422356 - 1 = 6422355
     * And Next Shift → 6422355 -1 = 6422354
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * ************************/

    p = p -k;

    cout<<"Address Value of p in integer  after operation(2): "<<(int)p<<endl;
    cout<<"Address Value of p in ASCII character after operation(2): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * p = p - k
     * i.e. Again p = p -2;
     * hence 1st shift → 6422354 - 1 = 6422353
     * AND next shift will be : 6422353-1= 6422352
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * **************************/
    cout<<"Address Value of s in integer before operation is: "<<(int)s<<endl;
    cout<<"Address Value of s in ASCII character before operation is: "<<s<<endl;

    s = (char *)(p - s);

    cout<<"Address Value of s in integer after operation is :"<<(int)s<<endl;
    //cout<<"Address Value of s in ASCII character after operation is: "<<s<<endl;
    
    //OPERATION***//
    /*****************************
     * s = (char *)(p - s);
     * i.e. [(Address p = 6422352) - (Address of s = 4201552) ] ;
     * i.e. Simply ,6422352 - 4201552 = 2220800 and divide by 1 to get the address of s
     * i.e. 2220800/1 = 2220800
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * 
     * Or
     * p = 6422352/1 = 6422352
     * q = 4201552/1 = 4201552
     * Now substract : 6422352 - 4201552 = 2220800
     * **************************/
    d= (char *)(p - s)+k;
    cout<<"Address Value of d in integer after operation is :"<<(int)d<<endl;
     cout<<"Address Value of d in ASCII character after operation is :"<<d<<endl;
    //OPERATION***//
    /*****************************
     * d = (char *)(p - s)+k;
     * i.e. [[(Address p = 6422352) - (Address of s = 2220800)/1]+(k=2) ] ;
     * i.e. Simply ,6422352 - 2220800= 4201552 
     * Then divide by 1 = 4201552  / 2 = 4201552
     * Now 4201552 +2 i.e. 
     * 1st Shift : 4201552+1 = 4201553
     * 2nd Shift : 4201553+1 = 4201554
     * And we get their corresponding hexadecimal values if we remove typecast (int)
     * 
     * Or
     * p = 6422352/1 = 6422352
     * s = 2220800/1 = 2220800 
     * Substract = 6422352 -2220800 = 4201552
     * Now 4201552+2 i.e. 
     * 1st Shift : 4201552+1 = 4201553
     * 2nd Shift : 4201553+1 = 4201554
     * Hence not much difference factors present in both the case.
     * **************************/

    return 0;
}