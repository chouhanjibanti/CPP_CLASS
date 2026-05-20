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

// #include<stdio.h>
// int main(){
//     int a =0 , b =1, temp =0;
    
//     for(int i=1;i<=8;i++){
//         printf("%d\n",a); // 0 // 1 // 1
//          temp = a+b;// temp = 0+1=1 // temp = 1+1=2 // temp = 
//          a = b;  // a = 1  // a= 1
//         b = temp; // b =1  // b = 2
//     }
//     return 0;
// }


// Perfact number :- 
// Number :- 6 -> 1+2+3 = 6

// #include<stdio.h>
// int main(){
//     int num = 28;
//     int sum =0;
//     for(int i=1;i<=num/2;i++){ // i=1 1<=3  || i=2
//         if(num%i==0){ // 6%1==0 // 6%2==0
//            sum += i; // sum = 0+1=1 || 1+2 = 3
//         }
//     }
//     if(sum==num){
//         printf("number is perfact number");
//     }else{
//         printf("Number is not perfact ");
//     }
//     return 0;
// }


// =============================================

// While loop :
// 1. Write a program to print a number from 1 to 50.
// 2. Write a program to check number even number or not.
// 3. Write a program to reverse a number where number is 5678.
// 4. Write a program to find the sum of the number from 1 to 20.
// 5. Write a program to check number is palindrome or not. 121 -> 121
// 6. Write a program to check number is Armstrong or not.


// 1. Write a program to print a number from 1 to 50.


// #include<stdio.h>
// int main(){
//     int num=1 ;
//     while(num<=50)
//     {
//         printf("%d\n",num);
//         num++;
//     }
//     return 0;
// }


// 3. Write a program to reverse a number where number is 5678.


// #include<stdio.h>
// int main(){
//     int num=5678;
//     int rev = 0;
//     while(num>0) // 5678>0 || 567>0
//     {
//       int digit = num%10; // 5678%10=8 | 567%10 = 7
//       rev = (rev*10)+digit; // rev = 8 / rev = 87
        //   sum = sum+ (digit*digti*digit);
//       num = num/10; // 5678/10 => 567/10 = 56
//     }
//     printf("%d\n",rev);
//     return 0;
// }

// 6. Write a program to check number is Armstrong or not.   -> 153 
// 153 -> 3*3*3+5*5*5+1*1*1 = 153 




//  #include<stdio.h>
// int isPower(int digit,int count){
//     int mul = 1;
//     for(int i=1;i<=count;i++){
//         mul = mul *digit;// 1*3= 3*3=9 || 9*3 = 27
//     }
//     return mul;
// }
// int main(){
//     int num= 153;
//     int n = num;
//     int count = 0;
//     int sum = 0;

//     while(num>0){
//         count++;
//         num = num/10;
//     }

//     while(n>0){
//         int digit = n%10;
//         sum = sum + isPower(digit, count);
//         n = n/10;
//     }
//     printf("%d\n",sum);
   
//     return 0;
// }

// ==========================================================


// Pattern Program :- 
// 1. 
// *
// * *
// * * *
// * * * *
// * * * * * 

// 2. 
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// 3. 
// * * * * *
// * * * *
// * * * 
// * *
// *

// 4. 
//         *
//       * *
//     * * *
//   * * * *
// * * * * *


// 1. 
// *
// * *
// * * *
// * * * *
// * * * * * 


// #include<stdio.h>
// int main(){
//     int star = 0;
//     for(int i=1;i<=5;i++){
//         star++;//1 
//         for(int j=1;j<=star;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 4. 
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

// 5. 
// * * * * *
//   * * * *
//     * * *
//       * *
//         *


// 6. 
//       *
//      * *
//     * * *
//    * * * * 
//   * * * * *

// 7. 
//     * * * * *
//      * * * *
//       * * *
//        * *
//         *

// 8. 
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include<stdio.h>
int main(){
    int star = 0;
    int space = 5;
    for(int i=1;i<=5;i++){
        star++;//1 
        space--;// 4
         for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

