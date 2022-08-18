#include<iostream>
using namespace std;
long fact(int );
int main() {
    int num;
    long(*ptrfact)(int);
    ptrfact = fact; //Pointer variable assigned to function address
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << ptrfact(num) <<"\n";
    //OR
    long result = (*ptrfact)(num);
    cout << "Factorial of " << num << " is " << result <<"\n";
    return 0;
}
long fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
