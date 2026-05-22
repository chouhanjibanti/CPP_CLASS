 Definition

A pointer is a variable that stores the memory address of another variable.

Normal variable stores value
Pointer variable stores address (memory location)


Note :- 
 Asterisk * -> * is used to access the value at the stored address (also called dereferencing operator).

| Variable | Meaning                        |
| -------- | ------------------------------ |
| `a`      | stores **10**                  |
| `&a`     | address of a                   |
| `p`      | pointer storing address of `a` |


Example :- 
int a = 5;      // Value = 5, assume address = 2022
int *ptr;       // Pointer variable
ptr = &a;       // ptr stores address of a (2022)

So:

ptr = 2022 (address of a)
*ptr = 5 (value stored at that address)


| Purpose       | Format Specifier |
| ------------- | ---------------- |
| Print address | `%p`             |
=================================================


Functions :- 
A function is self -contained block of statement.
By using function , we can achieve the concept of the resuablity 
A function perform a specific task.

A functions has three main parts :- 
1. function declration 
2. function calling 
3. function definition


change folder/directory -> cd folderName 
Back -> cd ..

