//  1. Arithmetic :- + , - ,  * , / , %
//   2. Relational :- == , != , > , < , >= , <=
//   3. Logical :- AND && , OR || , not !
//   4. Bitwise :- 
//   5. Increment /Decrement :- x++ , ++x, x-- , --X
//   6. Assignment :- += , sum = sum +i;   -> sum += i;
//   7. Ternary Operator :- condition ? true : false 



// #include<stdio.h>

// int main(){

//     int a =10 , b =3;

//     printf("Addition = %d\n",a+b);
//     // sub , div , Reminder , multiplication

//     return 0;

// }


//   2. Relational :- == , != , > , < , >= , <=
// it will return true[1] or false [0]
// #include<stdio.h>

// int main(){

//     int a =10 , b =20;
//   printf("%d\n", a==b);
//   printf("%d\n", a != b); // 10!=20
//   printf("%d\n", a>b);
//   printf("%d\n", a<b);
//   printf("%d\n", a>=b);
//   printf("%d\n", a<=b);
//     return 0;

// }


// Logical :- AND && , OR || , not !

// #include<stdio.h>

// int main(){

//    int age = 20;
//    int citizen =1;
//    // && , || , !

//    if(age >=18 && citizen ==1){
//     printf("Elible for the vote\n");
//    }

//     if(age<18 || citizen ==1){
//     printf("one conditions is true\n");
//    }

//    if(!(age<18)){
//     printf("Age is not less then 18\n");
// }

//     return 0;

// }


// Increment /Decrement :- x++ , ++x, x-- , --X

// #include<stdio.h>

// int main(){

//     int a =5;

//   printf("%d\n",a++);// first print then increment
// //   printf("%d\n",a);
//    printf("%d\n",++a);
//     return 0;

// }

// ternary operator 

// condition ? true : false


// #include<stdio.h>

// int main(){

//     int a =10;
//    int b = 20;

//    int max = (a>b) ? a : b;
//     printf("%d\n",max);
//     return 0;

// }

// ==========================================

// Types of CS:- 
//   1. if Statement
//   2. if else 
//   3. else -if ladder
//  4. nested if 
//  5. switch case 



#include<stdio.h>

int main(){

    // int age = 2;
    // if(age>=18){
    //     printf("you can vote");
    // }else{
    //     printf("you can not vote");
    // }

    // if(age>=1 && age<8){
    //     printf("you are Kids");
    // }else if(age>=8 && age <=18){
    //     printf("you are teenager");
    // }else{
    //      printf("you are Adult");
    // }


    // switch 
    int num = 1;
    switch (num)
    {
    case 1:
       printf("deposit");
        break;
    case 2:
       printf("Withdraw");
        break;
    case 3:
       printf("pin generate");
        break;
    default:
       printf("Wrong Choice");
        break;
    }
    return 0;
}