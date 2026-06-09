What is Constructor :- 

1. Constructor is a special function inside a class.
2. name of constructor = name of class name
3. constructor do not have any return type. (not even void)
4. consturctor is always declared in the public section.
5. contructor is automatically called when object is created.

Types of Constructor in cpp :- 
1. Default Constructor /No paramaterized constructor
2. Parameterized Constructor 
3. Copy Constructor 

Syntax of the default constructor :- 
class X{
    int a ,b;
 public:
    X(){
        a =1;
        b =2;
    }
}


====================================

2. Paramterized Constructor 

Syntax:- 
X(int a1, int b1){
   a= a1;
   b = b1;
}

===========================


3. Copy Constructor 

Syntax :- 

X(X &obj){
    a = obj.a
    b = obj.b
}