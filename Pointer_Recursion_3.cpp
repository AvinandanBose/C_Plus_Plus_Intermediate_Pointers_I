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
void sumOfNumbers(int *i, int *range, int *sum){
    int temp_i = *i;
    int temp_range = *range;
    int temp_sum = *sum;

    if(temp_i==temp_range){

        temp_sum = temp_sum  + temp_i;
        cout<< "Sum of numbers: "<< temp_sum<<endl;
        return ;

    }
    temp_sum = temp_sum  + temp_i;
    int x = (*i)+1;
    sumOfNumbers(&x,&temp_range,&temp_sum);
}