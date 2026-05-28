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

// #include<stdio.h>
// int main(){
   
//     int a[7] = {2,3,5,7,9,12,14};
//     int f=0, l=6,m , no;
  
//     printf("Enter the number to search :");
//     scanf("%d",&no);

//     while(f<=1)
//     {
//         m = (f+l)/2; // 3
//         if(a[m] == no){ // 7 == 3
//           printf("Element found at index %d and position %d\n",m,m+1);
//           break;
//         }else if(a[m] < no){ // 7 < 3
//             f  = m+1; // f = 3+1 = 4
//         }
//         else{
//              l = m-1; // 3-1 = 2
//         }
//     }
//     if(f>1){
//         printf("Element not found\n");
//     }
//        return 0;
// }

// ======================================================

// Example of 2-D Array 

// #include<stdio.h>
// int main(){
   
//     int a[2][2],i,j;

//     printf("Enter the element of matrix A: \n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//         scanf("%d",&a[i][j]);
//     }
// }


//     printf("\nElement of matrix A:\n");
//      for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//         printf("%d\t",a[i][j]);
//     }
//     printf("\n");
// }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//    int a[3][3], b[3][3], c[3][3],i,j;

//        printf("Enter the element of matrix A:(3*3) \n");
//       for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//         scanf("%d",&a[i][j]);
//     }
// }

//         printf("Enter the element of matrix B:(3*3) \n");
//       for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//         scanf("%d",&b[i][j]);
//     }
// }

//     // Matrix Addition
//    printf("Enter the element of matrix A+b:(3*3) \n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             c[i][j] = a[i][j]+b[i][j];
//             printf("%d\t", c[i][j]);
//         }
//         printf("\n");
//     }
// }


// 1 0 0
// 0 1 0
// 0 0 1


// Marix calculation program (3*3)

// Transpose 
// 1 2 3 
// 4 5 6 
// 7 8 9

// -> 
// 1 4 7 
// 2 5 8 
// 3 6 9 

// ============================================
// Bubble Sort :- 

// areay :- [4,78,3,2,1,9]
// [1,2,3,4,9, 78]


// #include<stdio.h>
// int main(){
//    int a[5] = {4,3,2,1,9}; // 4 3 2 1 9 
//    int i , j , temp , flag;// flag taken because if array is sorted then falt will 1.

//    for(i=0;i<4;i++){ // i=0 0<4 T 
//        flag =1; // flag  = 1

//        // 4 9 2 3 1 // 
//        for(j=0;j<4-i;j++){ // j=0 , j<4 T   || j=1 || j= 2 || j= 3
//           if(a[j]> a[j+1]){ // 3 4 2 1 9 || 3 2 4 1 9 ||  3 2 1 4 9 || 3 2 1 4 9 
//             temp =a[j];
//             a[j] = a[j+1];
//             a[j+1] = temp; 
//             flag =0;
//           }
//        }
//        if(flag==1){
//         break;
//        }
//     }
//        printf("Sorted Array :\n");
//        for(i=0;i<5;i++){
//         printf("%d\t",a[i]);
//        }
//     return 0;
// }


// selection sort 

// #include<stdio.h>
// int main(){
//    int a[5] = {9,5,8,3,6};
//    int i , j , min , temp;

//    for(i=0;i<4;i++){
//       min = i; // min = 0; -> assume  a[0] is smallest 

//       for(j= i+1;j<5;j++){
//         if(a[j]< a[min]){ // a[2] < a[1]
//             min = j;
//         }
//       }

//       temp = a[i]; // temp = 9
//       a[i] = a[min]; // a[i] = 5
//       a[min] = temp; // a[min] = 9;
//    }

//     printf("Sorted Array :\n");
//        for(i=0;i<5;i++){
//         printf("%d\t",a[i]);
//        }
//     return 0;
// }

// String 
// Leap Year 
// Swap two number with third
// swap two number without third


// #include<stdio.h>
// int main(){
//    int a = 10;
//    int b = 20;
//    a = a+b; // a = 30
//    b = a-b; // b = 10
//    a = a-b; // a= 20
//    printf("After swaping");
//    printf("%d",a);
//    printf("%d",b);
//     return 0;
// }
