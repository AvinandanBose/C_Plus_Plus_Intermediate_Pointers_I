# C_Plus_Plus_Intermediate_Pointers(I)
Its an intermediate guide series on C++

<h1> 1. Pointers  </h1>
<h3> A pointer is a entity which cointains a memory address and specified location of computer memory. </h3>
<h3> Suppose integer i = 10 which has address in the memory location FFFF4 and *p is a pointer which assigned to address of integer i  through & → address operator. Now if we makes output of *p we get 10 i.e *p which contains address of i i.e. FFFF4 points to that address and fetch the value from that address. </h3> 

<h3><ins>Dereferencing operator(*)/Indirection Operator(*)</ins> :→ Dereferencing is an operation  performed to access and manipulate data contained in the memory location 'pointed to' by a pointer. The operator '*' is used to deference pointers. </h3>
<img src="https://user-images.githubusercontent.com/38869235/185744259-3dba41c1-7c5e-41fc-93b8-8ae2c0686123.png">
<ul>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/1_Pointers.cpp"> 1. Pointer(Example 1)</a> </strong></li>
</ul>
<h3> <ins><i>Note</i></ins> : <i> int *p = &i; similar to operation : *&i </h3>
<ul>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/2_Pointers.cpp"> 2. Pointer(Example 2)</a> </strong></li>
</ul>
<h3><i> Similarly,  *ptr is a pointer variable and ptr=&i and *ptr = 20 , then 20 is saved to address of variable i which is possible only because of dereferencing operator. </i></h3>  
<ul>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/3_Pointers.cpp"> 3. Pointer(Example 3)</a> </strong></li>
</ul>
<h3> int *ptr → ptr is a pointer to an integer , char *ptr → ptr is a pointer to a character , double *ptr→ ptr is a pointer to a double ..... etc. </h3>
<h2> Pointer Variable </h2>
<h3>int *ptr ; Here int is a data type , * → is dereferencing operator (pointer) and ptr→ is pointer variable.</h3>

```Syntax 
<data_type> *<ptrvar_name>
`````
<h2>Pointer in function(Call By Reference)</h2>
<h3><ins>1. Call By Reference</ins> :- When address of actual parameter is copied to formal parameter(Address used as reference) for execution of the function.</h3>
<h3><ins>2. Passing Argument By Reference</ins> :- When pass by reference technique is used , the address of the data item is passed to the called function(Call By Reference) i.e. reference address of the actual argument is passed to the formal argument. </h3>

```Syntax 
 Function Declaration:
<return_data_type> function_name (data_type_1 * , data_type_2 * ,......, data_type_n *);
`````

```Syntax 
 Function Definition:
<return_data_type> function_name (data_type * formal_argument_1,data_type * formal_argument_2,...., data_type * formal_argument_n)
{
///Function Body
}
`````
<h3><i><ins>Note:</ins> Each formal argument is a pointer variable. </i></h3>

```Syntax 
 Function Call:
 function_name (&actual_argument_1, &actual_argument_2,...., &actual_argument_n)
`````

<ul>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/4_Pointers.cpp"> 4. Pointer{XOR SWAPPING}(Example 4)</a> </strong></li>
</ul>

<h2>More Examples on Pointers </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersExamples_1.cpp"> 1. Pointer{Length of Digits}(Example 1)</a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersExamples_2.cpp"> 2. Pointer{Sum of Digits}(Example 2)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersExamples_3.cpp"> 3. Pointer{Reverse Of A  Number}(Example 3)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersExamples_4.cpp"> 4. Pointer{Palindromic Numbers Upto a Range}(Example 4)→[Pointers in Function]</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersExamples_5.cpp"> 5. Pointer{Palindromic Numbers Upto a Range(Type 2)}(Example 5)→[Pointers in Function]</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersExamples_6.cpp"> 6.Pointer{Prime Numbers Upto A Range}(Example 6)→[Pointers in Function]</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersExamples_7.cpp"> 7.Pointer{Prime Numbers Upto A Range(Type 2)}(Example 7)→[Pointers in Function]</a> </strong></li>
</ul>

<h3> <ins><i>Note</i></ins> : <i> We have 

```Syntax 
 Function Definition:
 return_type function_name(datatype pointer_variable){
 //function body
 }
`````
 such as : 
 ```Syntax 
  int lengthOfDigits(int *number){
  //function body
  }
 
`````
Then , in main() function either we call :
 ```Syntax: 
 function_name(address_operator variable_name);
 
`````
Such as:
 ```Syntax 
 lengthOfDigits(&i);
 
`````
Or
We assign :

 ```Syntax 
 data_type pointer_variable = address_operator variable_name; 
 function_name(pointer_variable);
`````
Such as:
 ```Syntax 
int *ptr = &i;
lengthOfDigits(ptr);
`````
i.e. *ptr holds address of variable i and  it fetch the value when it is called. Note →Both the way, it satisfies function declararion :
```Syntax 
 Function Declaration:
<return_data_type> function_name (data_type_1 * , data_type_2 * ,......, data_type_n *);
`````
</h3>

<h2>Pointers in Recursive Function</h2> 
<h2>1. Print Number from 1 to range</h2> 
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_1.cpp"> 1. Pointer in Recursive Function{Print Number from 1 to range(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_2.cpp"> 2. Pointer in Recursive Function{Print Number from 1 to range(Type 2)})</a> </strong></li>
</ul>
<h2>2. Sum of numbers </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_3.cpp"> 1. Pointer in Recursive Function{Sum of numbers(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_4.cpp"> 2. Pointer in Recursive Function{Sum of numbers(Type 2)}</a> </strong></li>
</ul>
<h2>3. Count Of Digits </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_5.cpp"> 1. Pointer in Recursive Function{Count of Digits(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_6.cpp"> 2. Pointer in Recursive Function{Count of Digits(Type 2)}</a> </strong></li>
</ul>
<h2>4. Fibonacci Series </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_7.cpp"> 1. Pointer in Recursive Function{Fibonacci Series(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_8.cpp"> 2. Pointer in Recursive Function{Fibonacci Series(Type 2)}</a> </strong></li>
</ul>
<h2>5. Factorial </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_9.cpp"> 1. Pointer in Recursive Function{Factorial Upto A Given Range(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_10.cpp"> 2. Pointer in Recursive Function{Factorial Upto A Given Range(Type 2)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_12.cpp"> 3. Pointer in Recursive Function{Factorial Upto A Given Range(Type 3)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_13.cpp"> 4. Pointer in Recursive Function{Factorial Upto A Given Range(Type 4)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_11.cpp"> 5. Pointer in Recursive Function{Factorial Of A Number}</a> </strong></li>
</ul>
<h3> <ins><i>Note 1</i></ins> : <i> (*ptr_var) → Bracket priortize the pointer variable for the operation. Similarly, *ptr_var = &i  and *ptr_var = *ptr_var +1 ; is a valid pointer operation which will fetch the value of the i referencing through the address and will update it adding 1 to the value of variable i i.e. if i =10 then , output will be 11.</h3>
<h3>Example </h3>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/example.cpp"> Example of above Note</a> </strong></li>
</ul>

<h3><ins><i>Note 2</i></ins> :Also in recursion when :</h3>

```Syntax 
 Recursion:
<return_data_type> function_name (data_type *ptr_var){
data_type var = *ptr_var;
return function_name (&var);
};

Such as:
int display(int *i){
int j = *i;
display(&j);
}

`````

<h3> <i>Here the &j or &var [address of var/j] everytime gets assigned to *i or *ptr_var to complete the process i.e *ptr_var → &var / *i → &j</i> </h3>

<h3>Example </h3>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/example2.cpp"> Example of above Note</a> </strong></li>
</ul>

<h2>Pointers Action in For Loop (Same logic for other Loops) </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/ForLoop_Pointers_1.cpp"> 1. Pointer in For Loop (Example 1)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/ForLoop_Pointers_2.cpp"> 2. Pointer in For Loop (Example 2)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/ForLoop_Pointers_3.cpp"> 3. Pointer in For Loop (Example 3)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/ForLoop_Pointers_4.cpp">4.Pointer in For Loop (Example 4)</a> </strong></li>
</ul>

<h2>Void Pointers</h2>
<h2>1. Operation of Void Pointers at different Data Types </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/void_pointers_1.cpp"> 1. Operation of Void Pointers at different Data Types (Example 1)</a> </strong></li>
</ul>

<h2>2.Operation of Void Pointers in Function  </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/void_pointers_2.cpp"> 2. Operation of Void Pointers in Function(Example 2)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/void_pointers_3.cpp"> 3. Operation of Void Pointers in Function(Example 3) </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/void_pointers_4.cpp">4.Operation of Void Pointers in Function (Example 4)</a> </strong></li>
</ul>

<h2>3.Operation of Void Pointers in For Loop  </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/void_pointers_5.cpp"> 5.Operation of Void Pointers in For Loop (Example 5)</a> </strong></li>
</ul>

<h2>4.Operation of Void Pointers in Recursion  </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/void_pointers_6.cpp"> 6. Operation of Void Pointers in Recursion(Example 6)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/void_pointers_7.cpp"> 7. Operation of Void Pointers in Recursion(Example 7) </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/void_pointers_8.cpp"> 8. Operation of Void Pointers in Recursion(Example 8) </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/void_pointers_9.cpp"> 9. Operation of Void Pointers in Recursion(Example 9) </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/void_pointers_10.cpp"> 10. Operation of Void Pointers in Recursion[Fibonacci Series Upto A Range Using Void Pointers](Example 10) </a> </strong></li>
</ul>
<h3><i><ins>Note:</ins> Void Pointers uses the reserved word "void" for specifying the type of the pointer.Pointers defined in this manner donot have any type associated with them and can hold any address of any type of variable i.e.  </i></h3>

```Syntax 
 int *ptr_var;
 int var;
 char var_1;
 ptr_var  = &var;

But It cannot be:(Invalid)

ptr_var = &var_1; //Invalid

(As ptr_var is int type pointer variable cannot store address address of character variable's address(Conversion Error:
Cannot convert char* to int *)
`````
<h3>But it cannot be with void pointers . We can assign several data_type variable addresses with single void pointer.</h3>

```Syntax 
void *vd_ptr;
int var;
char var_1;
vd_var  = &var; //valid
vd_var = &var_1; //valid
`````

<h3>Also while output we write : *((data_type *) vptr) , here (data_type *) is typecasted [pointer typecasting ]over void pointer variable to identify which type of datatype output we want , the reason is same : That is <i> Void Pointers uses the reserved word "void" for specifying the type of the pointer. </i></h3>

<h1>Pointer Arithmetic </h1>
<h3>Pointer Arithmetic is the Arithmetic based on Address hold by Pointer Variable. </h3>
<h3> Based on Valid Pointer Arithmetic Operation , program given below : </h3>
<h2>Valid Pointer Arithmetic Operation</h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_1.cpp"> Valid Pointer Arithmetic Operations with Explanation ( Example )- Integer Pointer</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_2.cpp"> Valid Pointer Arithmetic Operations with Explanation ( Example )- Double Pointer</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_3.cpp"> Valid Pointer Arithmetic Operations with Explanation ( Example )- Long Pointer</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_4.cpp"> Valid Pointer Arithmetic Operations with Explanation ( Example )- Float Pointer</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_5.cpp"> Valid Pointer Arithmetic Operations with Explanation ( Example )- Short Pointer</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_6.cpp"> Valid Pointer Arithmetic Operations with Explanation ( Example )- Char Pointer</a> </strong></li>
</ul>
<h2>A Multiplication Technique With Pointer (*ptr_var1 ** ptr_var2 => (*ptr_var1) * (*ptr_var2)) </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_7.cpp"> A Multiplication Technique With Pointer ( Example )</a> </strong></li>
</ul>
<h2>Increment and Decrement of Pointer Address</h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_8.cpp">Increment and Decrement of Pointer Address with Explanation ( Example )- Integer Pointer</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_9.cpp"> Increment and Decrement of Pointer Address with Explanation ( Example )- Long Pointer</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_10.cpp"> Increment and Decrement of Pointer Address with Explanation ( Example )- Float Pointer</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_11.cpp"> Increment and Decrement of Pointer Address with Explanation ( Example )- Double Pointer</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_12.cpp">  Increment and Decrement of Pointer Address with Explanation ( Example )- Short Pointer</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerArithmetic_13.cpp">  Increment and Decrement of Pointer Address with Explanation ( Example )- Char Pointer</a> </strong></li>
</ul>

<h3><i><ins>Note:</ins> </i> The adress of a pointer divided into two parts : <ins>1) Segment</ins> and <ins>2)Offset</ins>. The segment address, located within one of the segment registers, defines the beginning address of any 64K-byte memory segment. The offset address selects any location within the 64K byte memory segment. Segments in the real mode always have a length of 64K bytes.</h3>
&nbsp
<h3><i>Hence offset is a small part of the segment . Normally all pointers defines in a program in the small model contain only the offset part of the address. Such pointers are called  <ins>Near Pointers</ins>, which lie within a single segment only. The limitation can be overcomed by use of pointers, which are capable of holding both the segment as well as the offset part of an address. Such pointers are known as <ins>Far Pointers</ins>.</i> </h3>

<table>
<tr>
    <th>Memory model</th>
    <th colspan="3">Segment</th>
    <td colspan="2">Pointer Type</td> 
</tr>
<tr>
  <td ></td>
  <td >Code</td>
  <td >Data</td>
  <td>Stack</td>
  <td>Code</td> 
  <td>Data</td> 
</tr>
<tr>
  <td>Tiny</td>
  <td colspan="3" ALIGN=CENTER>64k</td>
  <td>near</td> 
  <td>near</td> 
</tr>
<tr>
  <td>Small</td>
  <td>64k</td>
  <td colspan="2" ALIGN=CENTER>64k</td> 
  <td>near</td>  
  <td>near</td>
</tr>
<tr>
  <td>Medium</td>
  <td>1MB</td>
  <td colspan="2" ALIGN=CENTER>64k</td> 
  <td>far</td>  
  <td>near</td>
</tr>
<tr>
  <td>Compact</td>
  <td>64k</td>
  <td colspan="2" ALIGN=CENTER>1MB</td> 
  <td>near</td>  
  <td>far</td>
</tr>
<tr>
  <td>Large</td>
  <td>1MB</td>
  <td colspan="2" ALIGN=CENTER>1MB</td> 
  <td>far</td>  
  <td>far</td>
</tr>
<tr>
  <td>Huge</td>
  <td>1MB</td>
  <td >64k</td>
  <td >64k</td>
  <td>far</td>  
  <td>far</td>
</tr>
</table>

<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/NearAndFarPointersExample.cpp">SEGMENT AND OFFSET ADDRESS OF NEAR AND FAR POINTER (EXAMPLE)</a> </strong></li>
</ul>
  
<table>
<tr>
    <th>Data Type</th>
    <th>Data Size</th>
    <td colspan="2">Pointer Type</td> 
</tr>
<tr>
  <td colspan="2"></td>
  <td>near</td>
  <td>far</td> 
</tr>
<tr>
  <td>char</td>
  <td>1</td>
  <td>2</td> 
  <td>4</td> 
</tr>
<tr>
  <td>short</td>
  <td>2</td>
  <td>2</td> 
  <td>4</td>  
</tr>
<tr>
  <td rowspan="2">int</td>
  <td>2(16 bit compiler)</td> 
  <td rowspan="2">2</td>
  <td rowspan="2">4</td>
</tr>
<tr>
   <td >4(32 bit compiler)</td>
</tr>
<tr>
   <td>long</td>
  <td>4</td>
  <td>2</td> 
  <td>4</td>
</tr>
<tr>
  <td>float</td>
  <td>4</td>
  <td>2</td> 
  <td>4</td>
</tr>
<tr>
  <td>double</td>
  <td>8</td>
  <td>2</td> 
  <td>4</td>
</tr>
</table>

<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_NEARFAR.CPP">NEAR AND FAR POINTER SIZES OF DATA TYPES (EXAMPLE)</a> </strong></li>
</ul>
  
`````Syntax
Invalid and Illegal Use of Pointers Examples:
-----------------------------------------------
int a , b , *p, *q;
p = -q; //Illegal use of pointers [uniary minus]
p = p << 1; //Illegal use of pointers [int* to int conversion]
p = p - q ; // Invalid :Nonportable pointer conversion 
p = p - q - a; // Invalid :Nonportable pointer conversion 
p = p + a; //Invalid Pointer Addition
p = p + q;//Invalid Pointer Addition
p = p * q; // Illegal use of Pointer
p = p * a; //Illegal use of Pointer
p = p / q ; //Illegal use of Pointer
p = p / b ; //Illegal use of Pointer
p = a / p ; //Illegal use of Pointer

  --------
`````
<h1>Pointers to Pointers</h1>
<h3>Where pointer (*ptr) store the address of a variable say var where data is stored say 10 . Then **ptrptr(Pointers to pointers) store address of that pointer (*ptr)and use it as a reference to fetch data from variable var through (*ptr).</h3>
<img src="https://user-images.githubusercontent.com/38869235/185744441-218882dd-ae12-4c4e-b729-c3aadb2a761e.jpg">
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerToPointers_1.cpp"> Simple Pointers To Pointer (Example -1)</a> </strong></li>
</ul>
<h2>Applying  Pointers to Pointers in Functions</h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerToPointers_2.cpp">Simple Arithmetic Addition Between Two Numbers (Pointers to Pointers in function Example - 1 )</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerToPointers_3.cpp">Reverse of a number (Pointers to Pointers in function Example - 2)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerToPointers_4.cpp">Length of Digit (Pointers to Pointers in function Example - 3)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerToPointers_5.cpp"> Palindromic Number Check (Pointers to Pointers in function Example - 4)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerToPointers_6.cpp"> Check A Number Is Prime  (Pointers to Pointers in function Example - 5)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointerToPointers_7.cpp"> Prime Number Upto A Range  (Pointers to Pointers in function Example - 6)</a> </strong></li>
</ul>

<h2>Pointers To Pointers in Recursive Function</h2> 
<h2>1. Print Number from 1 to range</h2> 
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_1.cpp"> 1. Pointer To Pointers in Recursive Function{Print Number from 1 to range(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_2.cpp"> 2. Pointer To Pointers in Recursive Function{Print Number from 1 to range(Type 2)})</a> </strong></li>
</ul>
<h2>2. Sum of numbers</h2> 
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_3.cpp"> 1. Pointer To Pointers in Recursive Function{Sum of numbers(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_4.cpp"> 2. Pointer To Pointers in Recursive Function{Sum of numbers(Type 2)})</a> </strong></li>
</ul>
<h2>3. Count Of Digits</h2> 
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_5.cpp"> 1. Pointer To Pointers in Recursive Function{Count Of Digits(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_6.cpp"> 2. Pointer To Pointers in Recursive Function{Count Of Digits(Type 2)})</a> </strong></li>
</ul>
<h2>4. Fibonacci Series</h2> 
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_7.cpp"> 1. Pointer To Pointers in Recursive Function{Fibonacci Series(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_8.cpp"> 2. Pointer To Pointers in Recursive Function{Fibonacci Series(Type 2)})</a> </strong></li>
</ul>
<h2>5. Factorial</h2> 
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_9.cpp"> 1. Pointer to Pointers in Recursive Function{Factorial Upto A Given Range(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_10.cpp"> 2. Pointer to Pointers in Recursive Function{Factorial Upto A Given Range(Type 2)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointers_Recursion_11.cpp"> 3. Pointer to Pointers in Recursive Function{Factorial Upto A Given Range(Type 3)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_12.cpp"> 4. Pointer to Pointers in Recursive Function{Factorial Upto A Given Range(Type 4)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/Pointer_Recursion_13.cpp"> 5. Pointer to Pointers in Recursive Function{Factorial Of A Number}</a> </strong></li>
</ul>
<h2>Pointers To Pointers Action in For Loop (Same logic for other Loops) </h2>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointesrForLoop_1.cpp"> 1. Pointers To Pointers in For Loop (Example 1)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointesrForLoop_2.cpp"> 2. Pointers To Pointers in For Loop (Example 2)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointesrForLoop_3.cpp"> 3. Pointers To Pointers in For Loop (Example 4)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/PointersToPointesrForLoop_4.cpp"> 4. Pointers To Pointers in For Loop (Example 4)</a> </strong></li>
</ul>
<h1>Pointers to Functions </h1>
<h3>A pointer to a function can be defined to hold the starting address of a function, and the same can be used to invoke a function. It is possible to pass addresses of different functions at different times thus making the function more flexible and abstract. </h3>

```Syntax 
ReturnType(*PtrToFn)(arguments_if_any)

Invoking a Function using Pointers:
----------------------------------
(*PtrToFn)(arguments_if_any)
or
PtrToFn(arguments_if_any)
`````
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/pointerTofunctions_1.cpp"> 1. Pointers to Functions(Example 1)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/pointerTofunctions_2.cpp"> 2. Pointers to Functions in Recursive Function{Factorial Of A Given Number}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/pointerTofunctions_3.cpp"> 3. Pointers to Functions in Recursive Function{Factorial Upto A Given Range(Type 1)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate/blob/main/pointerTofunctions_4.cpp"> 4. Pointers to Functions in Recursive Function{Factorial Upto A Given Range(Type 2)}</a> </strong></li>
</ul>
<h1>Passing Function Address To Function Argument</h1>
<h3>The address of a function can be passed as an argument to a functions, either by a function name or a pointer holding the address of a function. </h3>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/PassingFunctionAddress_1.cpp"> 1. Passing Function Address(Example 1)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/PassingFunctionAddress_2.cpp"> 2.Passing Function Address{Using Pointers[Type 1](Example 2)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/PassingFunctionAddress_3.cpp"> 3. Passing Function Address{Using Pointers[Type 2](Example 3)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/PassingFunctionAddress_4.cpp"> 4. Passing Function Address{Using Pointers To Pointers(Example 4)}</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/PassingFunctionAddress_5.cpp"> 5. Passing Function Address{Using Recursive Function(Example 5)}</a> </strong></li>
</ul>
<h1>Recursive Call To Main() Function </h1>
<h3>main()→cannot be  invoked recursively,  cannot be overloaded,  cannot be declared inline,  cannot be declared static in C++. But  if we assign the address of main() to any <ins>Pointer To Function</ins> having same return type of main() then invoking the <ins>Pointer To Function</ins> , main() function can be called <ins>Recursively</ins>, violating the first rule.</h3>
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/RecursiveCallToMain.cpp"> Recursive Call to Main() Function(Example)</a> </strong></li>

<h3>The above example generates output indefinite number of times , till the stack gets overflowed. </h3>
</ul>

<h1>Pointer to Constant Object</h1>
<h3>It indicates  Pointer to constant object which store address of  integer variable , Pointer to constant object which store address of  character variable etc. That is we cannot  manipulate the assigned <dataType> variable's value by referencing the variable's address through the pointer variable as referencing Object is constant.</h3>
  
```Syntax 
Syntax: const <dataType>* <var>; 

  is same as : 

<dataType> const * <var>
  
Such as:
const float *ptrpi;
float pi = 3.14f;
float area = 0.14f; 
ptrpi = &pi; //Allowed
ptrpi = &area; //Allowed
ptrpi = ptrpi+1;// i.e. Pointer Arithmetic is Allowed
*ptrpi = 10.15 ; // Trying to change value using address as a reference is not allowed as Object (ptrpi) is constant.

Similarly,
const float *ptrpi; is same as float const *ptrpi;

`````
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/PointerToConstantObject_1.cpp"> Pointer to Constant Object(Example 1)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/PointerToConstantObject_2.cpp"> Pointer to Constant Object(Example 2)</a> </strong></li>
</ul>
<h1>Constant Pointers </h1>
<h3> Constant Pointers tells its assigned address is fixed and constant . </h3>

```Syntax 
Syntax:  <dataType>* const <var>; → Constant Pointer To An Object which store address of a <dataType> Variable.

Such as : - int * const pi ; → Constant Pointer To An Object which store address of Integer Variable(Stored Address is Constant) 
but Object(pi) is not Constant.

Hence we can change values like :
  
int * const pi;
int i = 10;
int j = 20;
pi = &i;
*pi = 30;
*pi = 40;
Output will be 40.
But if we assign another address to the pointer i.e. 
  
pi = &j;

, it will refuse and generate error as it(pointer) is constant 
i.e. it's assigned address is fixed and constant.

Also, 
pi= pi+1 ; // Arithmetic Operation on Pointer Address is not Allowed and Possible here as Address is Fixed and Constant
,hence it will again refuse and generate error. 
 
  


Syntax: const <dataType> const * <var>;  → Constant Pointer To A Constant Object.



Here we cannot change values as Object is constant .

Such as :

const int* const pi;→ Constant Pointer To An Object(pi) which store address of Integer Variable(Stored Address is Constant) and the Object(pi) is also Constant.

int i = 10;
*pi = &i;
Then *pi = 20 is not possible. It Output 10 only, as pointers to const cannot be used to change the value of variable as Object (pi) is constant.
pi = &j; → It refuses again(not possible) and generate error, as Address assigned at first to Pointer Variable is fixed and Constant.
pi = pi + 1; →It refuses again and generate error, as  Arithmetic Operation on Pointer Address is not Allowed and Possible here as 
  Stored Address under Pointer Variable(Which is a constant object) is Fixed and Constant.

`````
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/ConstantPointers_1.cpp"> Constant Pointer(Example)</a> </strong></li>
</ul>
<h3><i><ins>Note:</i></ins> During Recursion , we have seen similar type of operations as depicted to the pictures below:</h3>
<img src="https://user-images.githubusercontent.com/38869235/185734715-3ee1862d-d03b-41ef-8c40-2e8b3f7ac938.png">
<img src="https://user-images.githubusercontent.com/38869235/185734795-5a8204ef-0ff3-4be1-94d6-2e631a5a3ca4.png">
<img src="https://user-images.githubusercontent.com/38869235/185734849-c97e7d83-681e-4b40-a399-6a1872659802.png">
<h3>And Similar type of operations is possible in Pointers to Pointers.</h3> 
<h3> Understanding it with 2 examples as given below : </h3> 
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/ExampleRelatedToPointers_FunctionCallAndRecursion.cpp"> Example 1 To Above Note (Pointers,Function,Function Call, Recursion)</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_Pointers_I/blob/main/ExampleRelatedToPointerToPointer_FunctionCallAndRecursion.cpp"> Example 2 To Above Note (Pointers To Pointers,Function,Function Call, Recursion)</a> </strong></li>
</ul>

<h3><i><ins>Note:</i></ins></h3> <h3><dataType> *ptr  and cout<<(int)ptr → would produce permission error if run on TDM-GCC  and compiler could restrict the type cast convertion . In such case use MinGW to avoid such error.</h3>
<h1> Next  👉 <a href = 'https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II'> C++ Intermediate II </a> </h1>
