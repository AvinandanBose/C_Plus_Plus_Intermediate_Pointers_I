/*
*ptr_var1 ** ptr_var2 ; //Same as (*ptr_var1) * (*ptr_var2)
*/
#include<iostream>
using namespace std;
int main(){
    //Multiplication of int 
    int  num,*ptr1,*ptr2 , x =2 , y = 3;
    ptr1 = &x;
    ptr2 = &y;
    cout<<"Address Value of ptr1 in integer : "<<*ptr1<<endl;
    cout<<"Address Value of ptr2 in integer : "<<*ptr2<<endl;
    num = *ptr1 ** ptr2 ; //Same as (*ptr1) * (*ptr2)
    cout<<"Integer Value of num:  " << num << endl;

    //Multiplication of float 
    float  num1,*ptr3,*ptr4 , s =2.5f , t = 3.6f;
    ptr3 = &s;
    ptr4= &t;
    cout<<"Address Value of ptr3 in integer : "<<*ptr3<<endl;
    cout<<"Address Value of ptr4 in integer : "<<*ptr4<<endl;
    num1 = *ptr3 ** ptr4 ; //Same as (*ptr3) * (*ptr4)
    cout<<"Integer Value of num1:  " << num1 << endl;
    
    //Multiplication of double 
    double  num2,*ptr5,*ptr6 , u =3.5 , v = 4.5;
    ptr5 = &u;
    ptr6= &v;
    cout<<"Address Value of ptr5 in integer : "<<*ptr5<<endl;
    cout<<"Address Value of ptr6 in integer : "<<*ptr6<<endl;
    num2 = *ptr5 ** ptr6 ; //Same as (*ptr5) * (*ptr6)
    cout<<"Integer Value of num2:  " << num2 << endl;


    //Multiplication of long
    long  num3,*ptr7,*ptr8 , m =3 , n = 4; //long int
    ptr7 = &m;
    ptr8= &n;
    cout<<"Address Value of ptr7 in integer : "<<*ptr7<<endl;
    cout<<"Address Value of ptr8 in integer : "<<*ptr8<<endl;
    num3 = *ptr7 **ptr8 ; //Same as (*ptr7) * (*ptr8)
    cout<<"Integer Value of num3:  " <<  num3 << endl;

     //Multiplication of short
    short  num4,*ptr9,*ptr10 , b =10 , c = 12; //short int
    ptr9 = &b;
    ptr10= &c;
    cout<<"Address Value of ptr9 in integer : "<<*ptr9<<endl;
    cout<<"Address Value of ptr10 in integer : "<<*ptr10<<endl;
    num3 = *ptr9 **ptr10 ; //Same as (*ptr9) * (*ptr10)
    cout<<"Integer Value of num3:  " <<  num3 << endl;
    
    

    //Multiplication of char
    char a,*p,*q , i ='a' , j = 'b';
    p = &i;
    q = &j;
    cout<<"Address Value of p in integer : "<<*p<<endl;
    cout<<"Address Value of q in integer : "<<*q<<endl;
    a = *p ** q ; //Same as (*p) * (*q)
    cout<<"ASCII character Value of a:  " << a << endl;
    cout<<"Equivalent integer Value of a:  " << (int)a << endl;


}