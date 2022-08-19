#include<iostream>
using namespace std;
int add(int *, int *);
int result(int (*)(int *,int *), int * , int *); //function declaration
int main()
{
    int a,b,sum;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    sum=result(add,&a,&b);
    cout<<"\nResult: "<<sum;
    return 0;
}

int add(int *x, int *y)
{
    return *x + *y;
}
int result(int (*fn)(int *, int *), int *x, int *y){
    int result = fn(x,y);
    return result;
}