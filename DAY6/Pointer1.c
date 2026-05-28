// #include<stdio.h>
// int main(){
   
//     int a = 5;
//     int *p;

//     p = &a;

//     printf("%d",*p);// output -> 5
//     return 0;
// }
// a= 5 
// p => store address of a variable
// *p -> gives the value store at address p -> 5

// ===================================================

// Pointer to pointer 

// #include<stdio.h>
// int main(){
//    int a = 5;
//    int *ptr;
//    int **ptr1;

//    ptr = &a;
//    ptr1= &ptr;

//    printf("%d\n", a); // a = 5
//    printf("%d\n",*ptr); // 5
//    printf("%d\n",**ptr1); // 5

//    // ptr -> store the address of a 
//    // ptr1 -> store the address of ptr
// //    **ptr1 -> give value of a 
   

//     return 0;
// }

// ===========================================

// Pointer to array 


#include<stdio.h>
int main(){
   int a[] = {10,20,30,40,50};
   int *ptr;

   ptr = &a[0];

   for(int i=0;i<5;i++){
     printf("%d", *ptr);
    //  ptr++;
   }
    return 0;
}