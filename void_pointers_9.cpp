#include<iostream>
using namespace std;
int rec(void * );
int main(){
    int p=10;
     rec(&p);

}

int rec(void *num){
    int temp = *((int*)num);
    void *temp2 = &temp;
    if(temp==0){
        return 0;
    }
   *((int*)temp2) = *((int*)temp2)/2;
    cout << *((int*)temp2) << endl;
   return rec((int*)temp2);
}