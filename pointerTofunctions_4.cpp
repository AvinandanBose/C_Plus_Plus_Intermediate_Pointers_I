#include<iostream>
using namespace std;
long fact(int );
int main() {
    int range;
    long(*ptrfact)(int);
    ptrfact = fact; //Pointer variable assigned to function address
    cout << "Enter a range: ";
    cin >> range;
    for(int i=0; i<=range; i++){
        int result = (*ptrfact)(i);
        
        cout << "Factorial of " << i << " is " << result <<"\n";
    }
    
    return 0;
}
long fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}