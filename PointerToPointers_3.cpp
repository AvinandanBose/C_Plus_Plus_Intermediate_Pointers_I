#include <iostream>
using namespace std;
int reverse(int **);
int main()
{
    int num, temp;
    int *ptr;
    cout << "Enter the number :" << endl;
    cin >> num;
    temp = num;
    ptr = &num;
    cout << "Reverse of " << temp << " is: " << reverse(&ptr) << endl;
    return 0;
}
int reverse(int **ptrptr)
{
    int sum = 0;
    while (**ptrptr != 0)
    {

        int temp = **ptrptr % 10;
        sum = sum * 10 + temp;
        **ptrptr = **ptrptr / 10;
    }
    return sum;
}