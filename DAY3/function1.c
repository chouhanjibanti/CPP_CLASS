// #include<stdio.h>
// void sleep(){ // function declaration
//     printf("i am sleeping\n");// definition
// }
// int main(){
   
//     printf("I'm main function\n");
//     sleep(); // function calling 
//     printf("i am end of the main function\n");
//     return 0;
// }

// =========================================

//  Types of functions in C language :- 

// 1. Default / No Arguments 
// 2. Paramterized function 
    //    -> call by value
    //    -> call by references
// 3. Return Types function


// ===========================================


// no argument function 

// #include<stdio.h>

// void msg();
// void show();

// int main(){
//    printf("i am in main function\n");
//    msg();
//    printf("i am back\n");
//     return 0;
// }

// void msg(){
//     show();
//     printf("I am in msg function\n");
// }

// void show(){
//     printf("I am in show function\n");
// }


// ==================================================

// functions :- add() , sub() , mul()

// #include<stdio.h>

// void add();
// void sub();
// void mul();

// int main(){
//    add();
//    sub();
//    mul();
//     return 0;
// }

// void add(){
//     int a ,b;
//     printf("Enter the value of a and b\n");
//     scanf("%d%d",&a,&b);
//     printf("Add of a and B = %d\n", a+b);

// }

// void sub(){
//     int a ,b;
//     printf("Enter the value of a and b\n");
//     scanf("%d%d",&a,&b);
//     printf("Add of a and B = %d\n", a-b);

// }

// void mul(){
//     int a ,b;
//     printf("Enter the value of a and b\n");
//     scanf("%d%d",&a,&b);
//     printf("Add of a and B = %d\n", a*b);
// }


// =====================================================

// function 


// #include<stdio.h>
// int fact(int a);
// int main(){
   
//     int a;
//     printf("Enter the value of a \n");
//     scanf("%d\n",&a);
//    int result = fact(a);
//    printf("Factorial = %d",result);
//     return 0;
// }

// void fact

// prime number 
// perfect number 
// palindrome number 


// =================================

// Check the a = 5 , b = 10 -> a is greater or b is greater 

// ========================


// Example :- Print n to 1 using the recursion .... 100 to 1

// #include<stdio.h>

// void show(int no);
// int main(){
   
//     int no;
//     printf("Enter Any number :");
//     scanf("%d", &no);
//     show(no);
//     return 0;
// }

// void show(int no){
//     if(no >=1){
//         printf("%d",no);
//         show(no-1);
//     }
// }

// Factorial  Number using the recursive 


#include<stdio.h>

void fact(int no);
int main(){
   
    int no;
    printf("Enter Any number :");
    scanf("%d", &no);
    fact(no);
    return 0;
}

void fact(int no){

  static int f = 1;

    if(no >=1){
        f = f*no; // 1*5 = 5*4=20
        fact(no-1); // 4
    }else{
      printf("%d",f);
    }
}


// sum of n number using the recursion