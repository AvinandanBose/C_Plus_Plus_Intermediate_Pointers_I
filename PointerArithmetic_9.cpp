#include <iostream>
using namespace std;
int main()
{
    long *a, *p;
    // Post Increment
    cout << "Address Value of p in integer before increment(post): " << (int)p << endl;
    a = p++;
    cout << " Value of a in integer : " << (int)a << endl;
    cout << "Address Value of p in integer after increment(post): " << (int)p << endl;
    // OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is post increment, it will store the address in pointer a = 4201163
     * Then it increments : 4201163+4 = 4201167,where 4 is size of long
     * **************************/

    // Pre Increment
    a = ++p;
    cout << " Value of a in integer : " << (int)a << endl;
    cout << "Address Value of p in integer after increment(pre): " << (int)p << endl;
    // OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is pre increment, it will store the incremented value in pointer a
     * i.e.: 4201163+4 = 4201167
     * And also the p's address gets incremented by 4(Size of long) = 4201163+4=4201167
     * **************************/

    // Post Decrement
    cout << "Address Value of p in integer before decrement(post): " << (int)p << endl;
    a = p--;
    cout << " Value of a in integer : " << (int)a << endl;
    cout << "Address Value of p in integer after decrement(post): " << (int)p << endl;
    // OPERATION***//
    /*****************************
     * p address value = 4201167
     * As it is post decrement, it will store the address in pointer a = 4201167
     * Then it decrements : 4201167-4 = 4201163 , where 4 is size of long
     * **************************/

    // Pre Decrement
    a = --p;
    cout << " Value of a in integer : " << (int)a << endl;
    cout << "Address Value of p in integer after decrement(pre): " << (int)p << endl;
    // OPERATION***//
    /*****************************
     * p address value = 4201163
     * As it is pre decrement, it will store the decremented value in pointer a
     * i.e.: 4201163-4 = 4201159
     * And also the p's address gets decremented by 4(Size of Long) = 4201163-4=4201159
     * **************************/
    return 0;
}