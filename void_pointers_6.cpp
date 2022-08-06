#include<iostream>
using namespace std;
int rec(void * );
int main(){
    int p=5;
    cout << rec(&p);

}

int rec(void *num){
    int temp = *((int*)num);
    if(temp == 0){
        return 0;
    }
    else{
        cout << temp << endl;
        temp--;
        return rec(&temp);
    }
   return 0;
}