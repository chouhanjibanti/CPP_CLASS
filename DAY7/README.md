Types of Memory Allocation :-
1. Static memory allocation
2. Dynamic Memory allocation

// Static Memory Allocation 

-> in static memory allocation , the compiler knowns at compile time how much memory must be allowcated to each variable.
-> The size is fixed before program execution
-> Example :- int a[10]// memory fixed at compile time 


// Dynamix Memory Allocation 
-> If memory is required during program execution (run time), then we use DMA.
-> DMA functions are available in stdlib.h

Functions of DMA :- 
-> malloc
-> calloc
-> free()


=======================================

malloc function :- 

1. Meaning -> malloc -> Memory Allocation 
2. Use -> Allocated a single block of memory
3. Return Type :- void* (generic Pointer)
4. Syntax :- ptr = (int*) malloc(n*sizeof(int));


calloc function :- 

1. Meaning : calloc -> contigous allocation
2. Use : Allocate multiple blocks of memory and initilize them to zero.
3. Syntax :- ptr = (int*) calloc(n, sizeof(int))


===================================================

Enum :- 

An enum (enumeration) is a collections of integer constants.

It allows you to assign name to assign value/number.

Syntax :- 

enum Week{
    SUN , MON , TUE , WED , THU , FRI , SAT
};

here sun = 0
mon = 1
tue = 2