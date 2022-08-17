/***** ****
 * Factorial of a number
 * ********************************/
#include<iostream>
using namespace std;
int calcFactorial(int **);
int main(){
    int range;
    cout << "Enter a range: ";
    cin >> range;
    cout << "Factorial upto " << range << " are: " << "\n";
    for(int i=0; i<=range; i++){
        int *ptr = &i;
        int **ptrptr = &ptr;
        cout  << calcFactorial(ptrptr) << endl;
    }
    
    return 0;
}
int calcFactorial(int **n){
    if(**n==1 || **n == 0){
        return 1;
    }
    int i = (**n)-1;
    int *ptr = &i;
    return **n *calcFactorial(&ptr); 
}