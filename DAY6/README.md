
Structure :- 
A Structure is collections of heterogenous data types .


Meaning :- 
1. An array stotred sametypes datac.
2. A Structure stores different type data together.

Syntax :- 

A student has :- 
name -> string 
age -> int 
roll number -> int 

==================================

How to defined the Structure :-0 


struct student{
    char name[20];
    int age;
    int rollNo;
}

======================================


Creating structure variable :- 

1. Method  inside main()

 -> struct student s;

2. After structure definition
 -> struct student {
     char name[20];
    int age;
    int rol
 } s;

 ========================================
 Accessting the structure member :-  . 
 s.age
 s.rollNo
 s.name

 =========================================

 Example :- 

 ============================================

 Union :- A union is user defined data type that allows diff data member to share memory location .

 Syntax :- 

 union union_name{
    datatype member,
    datatype member,
 }

 ===========================================


 Pointer :- 

 A pointer is a variabl4 that stores address of the another variable.
* -> value at that address 
& -> address  of a variable 


