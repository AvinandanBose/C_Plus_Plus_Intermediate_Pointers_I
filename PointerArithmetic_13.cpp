#include<iostream>
using namespace std;
int main()
{
    char *a, *p;
    
    //Post Increment
    cout<<"Address Value of p in integer before increment(post): "<<(int)p<<endl;
    cout<<"Address Value of p in ASCII character before increment(post): "<<p<<endl;

    a =  p++;

    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<" Value of a in ASCII character : "<<a<<endl;
    cout<<"Address Value of p in integer after increment(post): "<<(int)p<<endl;
    cout<<"Address Value of p in ASCII character after increment(post): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is post increment, it will store the address in pointer a = 4201163
     * Then it increments : 4201163+1 = 4201164, where 1 is size of char
     * **************************/

    //Pre Increment
    a = ++p;
    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<" Value of a in ASCII character : "<<a<<endl;
    cout<<"Address Value of p in integer after increment(pre): "<<(int)p<<endl;
    cout<<"Address Value of p in ASCII character after increment(pre): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is pre increment, it will store the incremented value in pointer a
     * i.e.: 4201163+1 = 4201164
     * And also the p's address gets incremented by 1(Size of Char) = 4201163+1=4201164
     * **************************/

    //Post Decrement
    cout<<"Address Value of p in integer before decrement(post): "<<(int)p<<endl;
    cout<<"Address Value of p in ASCII character before decrement(post): "<<p<<endl;
    
    a =  p--;

    cout<<" Value of a in integer : "<<(int)a<<endl;
    cout<<" Value of a in ASCII character : "<<a<<endl;
    cout<<"Address Value of p in integer after decrement(post): "<<(int)p<<endl;
    cout<<"Address Value of p in ASCII character after decrement(post): "<<p<<endl;
     //OPERATION***//
    /*****************************
     * p address value = 4201164
     * As it is post decrement, it will store the address in pointer a = 4201164
     * Then it decrements : 4201164-1 = 4201163 , where 1 is size of CHAR
     * **************************/

    //Pre Decrement
    a = --p;
    cout<<" Value of a in integer : "<<(int)a<<endl;
     cout<<" Value of a in ASCII character : "<<a<<endl;
    cout<<"Address Value of p in integer after decrement(pre): "<<(int)p<<endl;
    cout<<"Address Value of p in ASCII character after decrement(pre): "<<p<<endl;
    //OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is pre decrement, it will store the decremented value in pointer a
     * i.e.: 4201163-1 = 4201162
     * And also the p's address gets decremented by 1(Size of CHAR)→ 4201162-1 = 4201161
     * **************************/
    return 0;

}