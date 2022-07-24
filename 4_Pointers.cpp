#include<iostream>
using namespace std;
void swap(int *, int *);
int main()
{
   int t = 10;
   int s = 20;
    cout << "Before swap: t = " << t << " s = " << s << endl;
    swap(&t, &s);
    cout << "After swap: t = " << t << " s = " << s << endl;
}
void swap(int *a, int *b)
{
    
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
    return ; // return is not required here
}