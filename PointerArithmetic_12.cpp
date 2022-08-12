#include<iostream>
using namespace std;
int main()
{
    short *a, *p;

    //Post Increment
    cout<<"Address Value of p in integer before increment(post): "<<(int)p<<endl;
    a =  p++;
    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<"Address Value of p in integer after increment(post): "<<(int)p<<endl;
    //OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is post increment, it will store the address in pointer a
     * Then it increments : 4201163+2 = 4201165, where 2 is size of short
     * **************************/

    //Pre Increment
    a = ++p;
    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<"Address Value of p in integer after increment(pre): "<<(int)p<<endl;
    //OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is pre increment, it will store the incremented value in pointer a
     * i.e.: 4201163+2 = 4201165
     * And also the p's address gets incremented by 2(Size of short) = 4201163+2=4201165
     * **************************/

    //Post Decrement
    cout<<"Address Value of p in integer before decrement(post): "<<(int)p<<endl;
    a =  p--;
    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<"Address Value of p in integer after decrement(post): "<<(int)p<<endl;
     //OPERATION***//
    /*****************************
     * p address value = 4201165
     * As it is post decrement, it will store the address in pointer a = 4201165
     * Then it decrements : 4201165-2 = 4201163 , where 2 is size of short
     * **************************/

    //Pre Decrement
    a = --p;
    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<"Address Value of p in integer after decrement(pre): "<<(int)p<<endl;
    //OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is pre decrement, it will store the decremented value in pointer a
     * i.e.: 4201163-2 = 4201161
     * And also the p's address gets decremented by 2(Size of SHORT)→ 4201163-2 = 4201161
     * **************************/
    return 0;

}