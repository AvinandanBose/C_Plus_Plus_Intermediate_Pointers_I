#include<iostream>
using namespace std;
int main()
{
    int range , *ptr_range, j =0;
    cout<<"Enter the range of the loop:"<<endl;
    cin>>range;
    ptr_range = &range;
    for(int *i=&j;*i<*ptr_range;(*i)++)
    {
        cout<<"Hello"<<endl;
    }

    return 0;
}