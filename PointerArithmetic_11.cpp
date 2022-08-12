#include<iostream>
using namespace std;
int main()
{
    double *a, *p;
    //Post Increment
    cout<<"Address Value of p in integer before increment(post): "<<(int)p<<endl;
    a =  p++;
    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<"Address Value of p in integer after increment(post): "<<(int)p<<endl;
    //OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is post increment, it will store the address in pointer a = 4201163
     * Then it increments : 4201163+8 = 4201171,where 8 is size of double
     * **************************/

    //Pre Increment
    a = ++p;
    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<"Address Value of p in integer after increment(pre): "<<(int)p<<endl;
    //OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is pre increment, it will store the incremented value in pointer a
     * i.e.: 4201163+8 = 4201171
     * And also the p's address gets incremented by 8(Size of Double) = 4201163+8=4201171
     * **************************/

    //Post Decrement
    cout<<"Address Value of p in integer before decrement(post): "<<(int)p<<endl;
    a =  p--;
    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<"Address Value of p in integer after decrement(post): "<<(int)p<<endl;
     //OPERATION***//
    /*****************************
     * p address value = 4201171
     * As it is post decrement, it will store the address in pointer a = 4201171
     * Then it decrements : 4201171-8 = 4201163 , where 8 is size of double
     * **************************/

    //Pre Decrement
    a = --p;
    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<"Address Value of p in integer after decrement(pre): "<<(int)p<<endl;
    //OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is pre decrement, it will store the decremented value in pointer a
     * i.e.: 4201163-8 = 4201155
     * And also the p's address gets decremented by 8(Size of Double) = 4201163-8=4201155
     * **************************/
    return 0;

}