#include<dos.h> //near and far pointers in dos.h
#include<iostream.h>
#include<conio.h>
void main(){
 clrscr();
 int near *i;
 int far *j;
 cout<< "Size of Near Int: " << sizeof(i)<<endl;
 cout<< "Size of far Int: "<< sizeof(j)<<endl;
 char near *ch;
 char far *ch1;
 cout<< "Size of Near char: " << sizeof(ch)<<endl;
 cout<< "Size of far char: "<< sizeof(ch1)<<endl;
 long near *lng;
 long far *lngf;
 cout<< "Size of Near long: " << sizeof(lng)<<endl;
 cout<< "Size of far long: "<< sizeof(lngf)<<endl;
 short near *shrt;
 short far *shrtf;
 cout<< "Size of Near short: " << sizeof(lng)<<endl;
 cout<< "Size of far short: "<< sizeof(lngf)<<endl;

 float near *flt;
 float far *fltfar;

 cout<< "Size of Near float: " << sizeof(flt)<<endl;
 cout<< "Size of far float: "<< sizeof(fltfar)<<endl;

 double near *dbl;
 double far *dblf;

 cout<< "Size of Near double: " << sizeof(dbl)<<endl;
 cout<< "Size of far double: "<< sizeof(dblf)<<endl;
 getch();

}
//The file will not run in MIN GCC compilers but it need to be compiled
//with DOS based compilers i.e. TURBO C++