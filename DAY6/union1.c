#include<stdio.h>

union  student
{
  char name[20];
  int age;
};

int main(){
    union student s;

    printf("Enter the name:");
    scanf("%s",&s.name);
    

    printf("Enter the Age:");
    scanf("%d",&s.age);
    printf("Name:%s\n",s.name);
    printf("Age:%d\n",s.age);

    return 0;
}