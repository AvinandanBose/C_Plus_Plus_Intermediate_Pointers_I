#include<iostream>
using namespace std;
long fact(int );
long result(long (*)(int) , int); //function declaration
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << result(fact,num) <<"\n";
    //OR
    long res = result(fact,num);
    cout << "Factorial of " << num << " is " << res <<"\n";
    return 0;
}
long fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
long result(long (*fn)(int), int num) {
    
    return (*fn)(num);
}