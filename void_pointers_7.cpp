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
   int opr = *((int*)temp2)/2;
  cout << opr << endl;
   temp = opr;
   return rec(&opr);
}