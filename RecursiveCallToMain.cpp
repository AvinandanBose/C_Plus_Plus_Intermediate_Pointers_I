#include<iostream>
using namespace std;
int main(){
    int (*p)(); //As main()'s return type is int
    cout<<"Hello World"<<endl;
    p=main; //Assigning the address of main() function to pointer p
    (*p)();//Calling the function again and again through address of main() recursively
    return 0;

}