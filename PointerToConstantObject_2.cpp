#include<iostream>
using namespace std;
void print(const char*);
int add(const int*,const int*);
int main()
{
    char ch = 'Y';
    print(&ch);
    int a = 10,b = 20;
    cout<<"Addition of "<<a<<" and "<<b<<" is "<<add(&a,&b)<<endl;
     
    return 0;
}
void print(const char* str){
    cout<<str<<endl;
}
int add (const int* a, const int* b){
    return *a + *b;
}