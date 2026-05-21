// #include<stdio.h>
// int main(){
   
//     int  a = 5;
//      int *ptr;
//      ptr = &a;

//      printf("Value of a = %d\n",a);
//      printf("address of a = %p\n",&a);
//      printf("address of a by pointer = %p\n",ptr);
//      printf("value of a by pointer = %d\n",*ptr);
//     return 0;
// }

// ====================================================

// when we want to change the original value that time we can use pointer.

// without pointer 


// #include<stdio.h>

// void change(int x){
//      printf("%d\n",x);
//    x = 100;
//     printf("%d\n",x);
  
// }

// int main(){
   
//     int a = 10;
//      change(a);
//      printf("%d\n",a);
//     return 0;
// }



// call by references 


#include<stdio.h>

void change(int *x){
   *x = 100;
}
int main(){
   
    int a = 10;
     change(&a);
     printf("%d\n",a);
    return 0;
}