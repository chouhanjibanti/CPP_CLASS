// 1. strlen()
// 2. strrev()

// #include<stdio.h>
// #include<string.h>
// int main(){
//    char name[20] = "Atishay";
//   int len =  strlen(name);

//   printf("Length of name =%d",len);
//     return 0;
// };

// // strrev
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char name[20] = "Atishay";
 

//   printf("Reverse string =%s", strrev(name));
//     return 0;
// };


// =================================
// strupr()
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char name[20] = "AtiSHaY";
 

//   printf("uppercase string =%s\n", strupr(name));
//   printf("LowerCase string =%s", strlwr(name));
//     return 0;
// };

// ========================================

// strcat() :- concatenate strings

// #include<stdio.h>
// #include<string.h>
// int main(){
//    char name[20] = "Atishay";
//    char name1[20] = "indore";

//    strcat(name,name1);
//     printf("concatenated strings =%s\n", name);
 
//     return 0;
// };

// ============================

// strcmp :- compare two strings 

// #include<stdio.h>
// #include<string.h>
// int main(){
//    char name[20] = "Atishay";
//    char name1[20] = "AtishaY";

//   int result = strcmp(name,name1);

//   if(result==0){
//     printf("Strings are equal");
//   }else{
//     printf("Strings are not equal");
//   }
//     return 0;
// };

// =====================================

// strcy :- copy one string to another 

// #include<stdio.h>
// #include<string.h>
// int main(){
//    char name[20] = "Atishay";
//    char name1[20] ;


//     strcpy(name1,name);
//     printf("Copied strings =%s\n",name1);
 
//     return 0;
// };


// ============================================


// String more method/ functions
// strchr :- seaches for the first occreneces of a charctaer inside a string 
// strstr : searches for the first occu of a substring inside a string.
// strset :- replace every character of string with the given character.
// strcmi : compare two strings ignoring lowercase/uppercase



// #include<stdio.h>
// #include<string.h>
// void main(){
//    char name[20];

//     // printf("String character =%s\n", strchr("hRahul",'h'));
//     printf("String strstr =%s\n", strstr("Rajkumar","ku"));
//     printf("String strset =%s\n", strset("Rajkumar",'p'));
//     // printf("String ignore case = %d\n",strcmpi("Rahul","jiahul"));
// //    getch();
// }

// Reverse the string without using the methods.




#include<stdio.h>
#include<string.h>
int main(){
   char name[] = "Debugshala";

   int start = 0;
   int end = strlen(name)-1;

   char temp;

   // swapping 
   while(start < end)
   {
      temp = name[start];
      name[start] = name[end];
      name[end] = temp;

      start++;
      end--;
   }
   
   printf("%s",name);
   return 0;
}

// madam is palindrome or not.
