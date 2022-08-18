#include<iostream>
using namespace std;
int main()
{
    int range , *ptr_range, **ptrptr_range ,j =0, *ptr ;
    cout<<"Enter the range of the loop:"<<endl;
    cin>>range;
    ptr_range = &range;
    ptrptr_range = &ptr_range;
    ptr = &j;
    for(int **i = &ptr; **i<**ptrptr_range ; (**i)++)
    {
        cout<<"Hello"<<endl;
    }
   

    return 0;
}