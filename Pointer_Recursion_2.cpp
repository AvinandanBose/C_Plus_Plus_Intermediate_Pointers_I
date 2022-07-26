/*********
 * Print Number from 1 to range
 * ****************************************************************/
#include <iostream>
using namespace std;
void printNumber(int *);
int main(){
    int range;
    cout << "Enter a range: ";
    cin >> range;
    int *ptr = &range;
    printNumber(ptr);
    return 0;
}
void printNumber(int *n){
   
    if(*n == 0){
        return;
    }
    cout << *n << "\n";
    *n = *n-1;
    printNumber(n);
}