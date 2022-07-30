#include<iostream>
using namespace std;
int main()
{
    int range , j =0;
    cout<<"Enter the range of the loop:"<<endl;
    cin>>range;
    for(int *i=&j;*i<range;(*i)++)
    {
        cout<<"Hello"<<endl;
    }

    return 0;
}