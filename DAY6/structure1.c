// Example 1 
// #include<stdio.h>

// struct student
//    {
//       char name[20];
//       int age;
//       int rollNo;
//    };
// int main(){
   
//     struct student s;

//     printf("Enter name , age and roll number");
//     scanf("%s%d%d", &s.name,&s.age , &s.rollNo);

//     printf("Name=%s , Age=%d , Roll Number = %d\n", s.name ,s.age , s.rollNo);
//     return 0;
// }

// =================================================\

// Array of structure 
// used when you want to store details of the multiple studetns

// #include<stdio.h>

// struct student
// { 
//    char name[20];
//    int age;
// };

// int main(){
//    struct student s[3];
//    int i;

//    // input 
//   for(i=0;i<3;i++){
//     printf("Enter name and age of student : ");
//     scanf("%s%d", &s[i].name,&s[i].age);
//   }

//   // output
//   for(i=0;i<3;i++){
//      printf("Name :%s,Age:%d\n", s[i].name, s[i].age);
//   }

//     return 0;
// }

// set the two book with name and price 
// Exmployee structure -> name , post , salary 

// Nested Structure -> Structure inside structure is known as nested structure.l


// #include<stdio.h>

// struct  std
//     {
//     char name[20];
//     int age;
//      struct stdResult
//      {
//         char result[20];
//      } r;
// };
// int main(){
   
//     struct std s;

//     printf("Enter the name , age and result :");
//     scanf("%s %d %s", &s.name , &s.age , &s.r.result);

//     printf("Name :%s, Age:%d , Result :%s\n", s.name , s.age , s.r.result);
    
//     return 0;
// }


// Display the student who percentage above 60.

