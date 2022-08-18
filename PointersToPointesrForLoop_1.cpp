#include<iostream>
using namespace std;
int main()
{
    int range , j =0, *ptr;
    cout<<"Enter the range of the loop:"<<endl;
    cin>>range;
    ptr = &j;
    for(int **i=&ptr; **i<range;(**i)++)
    {
        cout<<"Hello"<<endl;
    }

    return 0;
}