#include<dos.h>
#include<iostream.h>
#include<conio.h>
void main() {
    clrscr();
    char ch; //near variables
    char far *cptr; //far
    unsigned int seg_val, off_val; //segment and offset

    cptr = (char far *) MK_FP (0xb800, 0x0000); //initialize far pointer
    //The MK_FP() macro can be used to obtain the far pointer value given by 
    //the segment→segment value and the offset→offset value. 
    //These values may be obtained by using the FP_SEG() and FP_OFF() macros.

    seg_val = FP_SEG (cptr);//fetch Segment Address from the far pointer
    //The FP_SEG() macro can be used to obtain 
    //the segment portion of the far pointer value given in far_ptr.

    off_val = FP_OFF (cptr);//fetch Offset Address from the far pointer
    //The FP_OFF() macro can be used to obtain the offset portion 
    //of the far pointer value given in far_ptr.

    ch = *cptr;

    cout << "Character at 0xb800: 0x0000 =" << ch << endl;
    cout << "Segment part of cptr = " << hex << seg_val << endl;
    cout << "Offset part of cptr = " << hex << off_val << endl;


    getch();
}
//The file will not run in MIN GCC compilers but it need to be compiled
//with DOS based compilers i.e. TURBO C++

