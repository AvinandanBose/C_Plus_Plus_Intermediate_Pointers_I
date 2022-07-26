/***** ****
 * Sum of Numbers
 * ******/
#include <iostream>
using namespace std;
void sumOfNumbers(int *,int *, int *);
int main(){
    int range;
    cout << "Enter a range: ";
    cin >> range;
    int i = 1;
    int j =0;
     sumOfNumbers(&i,&range,&j);
    return 0;
}
void sumOfNumbers(int *i,int *range, int *sum){
    if(*i == *range){
        *sum = *sum + *i;
        cout << "Sum of numbers: " << *sum << "\n";
        return;
    }
    *sum = *sum + *i;
    *i = *i + 1;
    sumOfNumbers(i,range,sum);
}