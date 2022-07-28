# C_Plus_Plus_Intermediate
Its an intermediate guide series on C++

<h1> 1. Pointers  </h1>
<h3> A pointer is a entity which cointains a memory address and specified location of computer memory. </h3>
<h3> Suppose integer i = 10 which has address in the memory location FFFF4 and *p is a pointer which assigned to address of integer i  through & → address operator. Now if we makes output of *p we get 10 i.e *p which contains address of i i.e. FFFF4 points to that address and fetch the value from that address. </h3> 

<h3><ins>Dereferencing operator(*)/Indirection Operator(*)</ins> :→ Dereferencing is an operation  performed to access and manipulate data contained in the memory location 'pointed to' by a pointer. The operator '*' is used to deference pointers. </h3>
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

```Syntax: 
<data_type> *<ptrvar_name>
`````
<h2>Pointer in function</h2>
<h3><ins>1. Call By Reference</ins> :- When address of actual parameter is copied to formal parameter(Address used as reference) for execution of the function.</h3>
<h3><ins>2. Passing Argument By Reference</ins> :- When pass by reference technique is used , the address of the data item is passed to the called function(Call By Reference) i.e. reference address of the actual argument is passed to the formal argument. </h3>

```Syntax: 
 Function Declaration:
<return_data_type> function_name (data_type_1 * , data_type_2 * ,......, data_type_n *);
`````

```Syntax: 
 Function Definition:
<return_data_type> function_name (data_type * formal_argument_1,data_type * formal_argument_2,...., data_type * formal_argument_n)
{
///Function Body
}
`````
<h3><i><ins>Note:</ins> Each formal argument is a pointer variable. </i></h3>

```Syntax: 
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

```Syntax: 
 Function Definition:
 return_type function_name(datatype pointer_variable){
 //function body
 }
`````
 such as : 
 ```Syntax: 
  int lengthOfDigits(int *number){
  //function body
  }
 
`````
Then , in main() function either we call :
 ```Syntax: 
 function_name(address_operator variable_name);
 
`````
Such as:
 ```Syntax: 
 lengthOfDigits(&i);
 
`````
Or
We assign :

 ```Syntax: 
 data_type pointer_variable = address_operator variable_name; 
 function_name(pointer_variable);
`````
Such as:
 ```Syntax: 
int *ptr = &i;
lengthOfDigits(ptr);
`````
i.e. *ptr holds address of variable i and  it fetch the value when it is called. Note →Both the way, it satisfies function declararion :
```Syntax: 
 Function Declaration:
<return_data_type> function_name (data_type_1 * , data_type_2 * ,......, data_type_n *);
`````
</h3>

<h1>Pointers in Recursive Function</h1> 
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
