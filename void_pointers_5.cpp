#include<iostream>
using namespace std;

int main(){
    int i = 1;
    void *ptr;
    for(ptr = &i; *((int*)ptr)<=10; i++ ){
        cout  << *((int*)ptr) << endl;
    }
   
    return 0;
}
