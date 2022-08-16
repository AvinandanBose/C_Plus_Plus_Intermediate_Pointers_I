#include<iostream>
using namespace std;
int add(int **, int **);
int main()
{
    int a = 10, b = 12;
    int *ptr = &a;
    int *ptr1 = &b;
    cout << add(&ptr,&ptr1) << endl;
  
    
    return 0;
}
int add(int **ptrptr, int **ptrptr1){

return (**ptrptr) + (**ptrptr1);

}