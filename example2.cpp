#include<iostream>
using namespace std;
int display(int *);
int main()
{
   int i, *ptr_var;
    cout<<"Enter the value of i:"<<endl;
    cin>>i;
    ptr_var = &i;
     display(&i);
    cout << "And" << "\n";
     display(ptr_var);
    return 0;
}
int display(int *i){
    if(*i==0){
        return 0;
    }
    int j = (*i)/2;
    cout<<j << endl;
    return display(&j);
}