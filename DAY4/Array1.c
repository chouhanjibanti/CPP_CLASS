// Example :-  1
// 1- D Array  

// #include<stdio.h>
// int main(){
   
//     int a[] = {10,20,30,40,50,60};
//     int i;

//     for(i=0;i<=5;i++){
//         printf("%d\n", a[i]);
//     }
//     return 0;
// }

// =============================================

// 2.Example :-  sum of the array elements 

// =============================================

// 3. Dynamic Example :- 

// #include<stdio.h>
// int main(){
//    int arr[5];
//    int sum = 0;

//    printf("Enter the Array Elements:\n");

//    for(int i=0;i<5;i++){
//     scanf("%d", &arr[i]);
//    }

//    for(int j=0;j<5;j++){
//     sum = sum + arr[j];
//    }
//    printf("Sum = %d\n", sum);
//     return 0;
// }

// =================================================

// 4.  Display the maximum and minimum element from the array , input taken from the user .

// #include<stdio.h>
// int main(){
//    int arr[5];
//    int min , max ;
//    printf("Enter the Array Elements:\n");
//    for(int i=0;i<5;i++){
//     scanf("%d", &arr[i]);
//    }
//    min = arr[0];
//    max = arr[0];

//    for(int i =1;i<5;i++){
//       if(arr[i]>max){
//          max = arr[i];
//       }
//       if(arr[i]<min){
//         min = arr[i];
//       }
//    }
//    printf("Maximum Element = %d\n",max);
//    printf("Minimum Element = %d\n",min);
//     return 0;
// }

// 5. Program to Add Two Arrays using the dynamic array 

// #include<stdio.h>
// int main(){
//    int a[5], b[5],c[5];
//    int min , max ;
//    printf("Enter the Array Elements: A\n");
//    for(int i=0;i<5;i++){
//     scanf("%d", &a[i]);
//    }

//     printf("Enter the Array Elements: A\n");
//    for(int i=0;i<5;i++){
//     scanf("%d", &b[i]);
//    }

//    for(int i=0;i<5;i++){
//     c[i]  = a[i]+b[i];  
// }

// printf("Display the elements after adding the two Array \n");
//    for(int i=0;i<5;i++){
//      printf("%d\n", c[i]);
//    }
//     return 0;
// }

// ===================================================

// 6. Linear Search  program (searh elememnt in Array) using the dynamic array 

// #include<stdio.h>
// int main(){
//    int a[5],key , found=0;
//    printf("Enter the Array Elements: \n");
//    for(int i=0;i<5;i++){
//     scanf("%d", &a[i]);
//    }

//    printf("Enter the number to search :");
//    scanf("%d",&key);

//    for(int i=0;i<5;i++){
//      if(a[i]==key){
//         printf("Element found at index %d and position %d\n",i,i+1);
//         found =1;
//         break;;
//      }
//    }
//    if(!found){ 
//      printf("Element not found\n");
//    }
//     return 0;
// }


// =========================================================


// 7. Binary Search Program -> find the  element from the array

#include<stdio.h>
int main(){
   
    int a[7] = {2,3,5,7,9,12,14};
    int f=0, l=6,m , no;
  
    printf("Enter the number to search :");
    scanf("%d",&no);

    while(f<=1)
    {
        m = (f+l)/2; // 3
        if(a[m] == no){ // 7 == 3
          printf("Element found at index %d and position %d\n",m,m+1);
          break;
        }else if(a[m] < no){ // 7 < 3
            f  = m+1; // f = 3+1 = 4
        }
        else{
             l = m-1; // 3-1 = 2
        }
    }
    if(f>1){
        printf("Element not found\n");
    }
       return 0;
}

