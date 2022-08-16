#include <iostream>
using namespace std;
int isPrime(int **);
int main()
{
    int range;
    cout << "Enter a number:"
         << "\n";
    cin >> range;
    for (int i = 2; i <= range; i++)
    {
        int temp = i;
        int *ptr = &temp;
        int **ptriptr = &ptr;
        if (isPrime(ptriptr) == 0) // or isPrime(&ptr)
        {
            cout << "The number " << i << " is prime" << endl;
        }
    }
    return 0;
}

int isPrime(int **num)
{
    int flag = 0;
    int *ptr = &flag;
    int **ptriptr = &ptr;
    for (int i = 2; i <= **num / 2; i++)

    {
        if (**num % i == 0)
        {
            **ptriptr = **ptriptr + 1;
            break;
        }
    }
    return **ptriptr;
}