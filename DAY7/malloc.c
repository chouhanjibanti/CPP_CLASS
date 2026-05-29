// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//    int n, i;
//    int *ptr;

//    printf("Enter the number of Elements :");
//    scanf("%d",&n);

//    ptr = (int*) malloc(n *sizeof(int)); // 5*4 = 20 bytes

//    printf("Enter the Elements :\n");
//    for(i=0;i<n;i++){
//      scanf("%d", &ptr[i]);
//    }

//    printf("Stored Element Displayed:\n");
//    for(i=0;i<n;i++){
//      printf("%d", ptr[i]);
//    }
   
//     return 0;
// }
// // 1000         10
// // 1004         20

// ========================================

// calloc :- 

#include<stdio.h>
#include<stdlib.h>
int main(){
   int n, i;
   int *ptr; //pointer variable 

   // size  taken from the user 
   printf("Enter the size of the elements :");
   scanf("%d",&n);

   /*
   calloc ()=> contigous allocation 

   Syntax :- 
   ptr = (int*) calloc(n,sizeof(int));
    n-> number of elememts
    sizeOf() -> size of each integer block 

    calloc() automatically intilize with 0.   
   */
   ptr = (int*) calloc(n,sizeof(int));
   // check memory is allocated or not .
   if(ptr == NULL){
     printf("memory not allocated");
     return 0;
   }

   // initliate value.
   for(i=0;i<n;i++){
     printf("%d\n", ptr[i]);// *(ptr+i) // ptr[i] means value a index i // initilially all value are 0.
   }

   printf("Enter the elements:\n");
   // taking the input
   for(i=0;i<n;i++){
     scanf("%d",&ptr[i]);
   }

    printf("Displayes Stored elements ");
    for(i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
}
// 1000 10 => 1004 20 