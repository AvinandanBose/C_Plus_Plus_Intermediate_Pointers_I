/*********
 * Print Number from 1 to range
 * ****************************************************************/
#include <iostream>
using namespace std;
void printNumber(int **);
int main(){
    int range, *ptr_range;
    cout << "Enter a range: ";
    cin >> range;
    ptr_range = &range;
    printNumber(&ptr_range );
    return 0;
}
void printNumber(int **n){
   int temp = **n;
   int *ptr;
    if(temp == 0){
        return;
    }
    cout << temp << "\n";
    int x = (**n)-1;
    ptr = &x;
    printNumber(&ptr);
}