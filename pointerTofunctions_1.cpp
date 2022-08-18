#include<iostream>
using namespace std;
int  add(int , int);
int main() {
    int(*ptradd)(int, int);
    ptradd = add;
    int num1, num2;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Sum of " << num1 << " and " << num2 << " is " << ptradd(num1, num2)<<"\n";
    //OR
    int result  = (*ptradd)(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " is " << result <<"\n";
    return 0;
}
int add(int a, int b) {
    return a + b;
}