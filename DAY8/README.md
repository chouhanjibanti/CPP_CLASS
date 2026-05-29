C :- 

syntax :- 
token 
functions 
Array 
String 
calloc and malloc 
union 
structure 
loops  ->  Monday 
Conditional Statement  -> Monday 


====================================================

CPP introductions :- 

1. Cpp was introduced bajre stroustrap in 1979.
2. Its extension is cpp and Object oriented Porgramming Langauge.
3. c++  supports procedural and object oriented programming. -> Hybrid language 
4. c uses top-down approach and cpp used bottom-up approach.

object oriented Programming language 
   oops is object oriented paradigm deal in the form classes and object
  we can deal with the real time object.
-> Deal with class and Objects


#include<iostream> // header file (for input/output)
using namespace std;   // standard namespacc

int main(){
    count << "Hello debugshala";

    return 0;
}
=========================================


Commands for the run cpp code :- 
g++ filename.cpp -o filename -> compilation
./filename -> Run 

======================================


OOPS :- main pillars (with example)
1. Encapsulation 
2. Polymorphism
3. Inheritance
4. Abstraction 


1. Encapsulation :- 
-> Definition :- Binding data member/properties/variables and member functions/method into a single unit(class).
-> purpose :- data hiding , security 
-> Example 


Que :-1: Create a class Employee that hides salary and provides functions to set and get salary.

-> Use private: salary
-> Public functions: setSalary(), getSalary()

Que:-2: Create a class Car that hides speed and fuel.

Write methods to:
-> setSpeed()
-> setFuel()
-> showDetails()

Both speed and fuel must be private.

===================================


Que :-3: Create a class Student with private marks of 3 subjects.

Write functions to:
-> setMarks()
-> calculateTotal()
-> calculatePercentage()
-> showResult()

Marks must not be accessed directly.



Ques :-5: Create a class Laptop which hides price and modelNumber.

Write methods to:
-> setData(price, modelNumber)
-> displayData()

Price should never be negative → validate in setter.