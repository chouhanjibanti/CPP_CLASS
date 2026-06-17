<!-- what is Destructor :- 

Definition :0 
A desctructor is special member function of a classs that is automatically called when object is destroyed.

Mainly why we use :- 
1. close file 
2. free sources 
3. clean up operation perform
=============================================

Syntax :- 
class A{
    public:
       ~A(){
         / clean up code
       }
}

name of the destructor is same name of the class Name.
starts with ~
No return type 
No parameters 
only one desctructor per class -->

========================================


Friend class :- 
A friend class is a class that can access the private member of the another class.


Syntax :- 

class A{

  friend class B;
}

// in this case class B can access the private data of the class A

Note :- 
A is friend of B;
does not mean :-  b is friend of A 


============================================================

what is Abtract class :- 

A class which contains at least one pure virtual function is called abstract class.


Syntax :-

class Animal {

  public: 
      virtual void sound() =0;
}


Rules :- Rules of Abstract class 
1. you can not create the object 
    wrong :- Animal a;

2. Child class must implement pure virtual function.

3. can have :
 - Constructor
 - variables 
 - normal functions 

======================================

Lambda Expression :- 

lambda is an anonymous function.
function without a name.

Syntax :- 
[](){
   // statement
};


=============================================

C++ Templates :- 
Templates allow you to write generic code that works with different data types without rewriting the same logic.

-> Function Templates

A function template allows a function to work with different data types.

Syntax
template <typename T>
return_type function_name(parameters)
{
    // code
}