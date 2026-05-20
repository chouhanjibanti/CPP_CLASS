// For loop : 
// 1. write a program to hello-world 10 times.
// 2. Print the number from 1 to 10.
// 3. Print the number from 10 to 1.
// 4. print the square of the number from 1 to 10.
// 5. Print the table of 5.
// 6. Print the even number from 1 to 50.
// 7. print the sum of number from 1 to 20.
// 8. Write a program to find the factorial of number where number is 6.
// 9. Write a program to check number is prime or not.
// 10. Write a program of faboncci series.


// 7. print the sum of number from 1 to 20.

// #include<stdio.h>
// int main(){

//    int sum = 0;
//    for(int i=1;i<=20;i++){
//     sum += i;
//    }
//     printf("%d\n",sum);
//     return 0;

// }


// 8. Write a program to find the factorial of number where number is 6.

// #include<stdio.h>
// int main(){
//     int num = 6;
//     int fact = 1;
//     for(int i=1;i<=num;i++){
//        fact *= i;
//     }
//     printf("%d\n",fact);
//     return 0;

// }


// 9. Write a program to check number is prime or not.

// prime number =  2, 3, 5, 7, 11, 13, 17
// divisible by itself or 1 .


// #include<stdio.h>
// int main(){
    
//     int count =0;
//     int num = 4;
//      for(int i=2;i<=num;i++){// 2 , 3 , 4
//         if(num%i==0){ // 4%3 // 4%4
//             count++;  // 1
//         }
//      }
//      if(count==1){
//         printf("Number is prime");
//      }else{
//         printf("Number is not prime");
//      }
//     return 0;
// }


// 10. Write a program of faboncci series.
// series :- 0 ,1, 1,2, 3, 5, 8, 13

#include<stdio.h>
int main(){
    int a =0 , b =1, temp =0;
    
    for(int i=1;i<=8;i++){
        printf("%d\n",a); // 0 // 1 // 1
         temp = a+b;// temp = 0+1=1 // temp = 1+1=2 // temp = 
         a = b;  // a = 1  // a= 1
        b = temp; // b =1  // b = 2
    }
    return 0;
}




