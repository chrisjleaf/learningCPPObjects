// Simple Example showing the difference between
// passing by value, and passing by reference
// NOTE: Remember "reference to" is synonymous with "pointer to"
#include <stdio.h>
/*                [0] [1] [2] [3]  ...
 *               _______________________
 *    ptr -----> |___|___|___|___|....
 *                arr
 *
 *    int arr[10];
 *    int *ptr; 
 *    ptr = arr;    //Sets ptr to point to first element of arr
 *    ptr = &arr[3] //Sets ptr to point to the 4th element of arr
 *                  //Because arr[3] ~= (int) (*(arr + 3))  which is DEREFERENCED
 *                  //So you take the address again to make it a (int *) type
 */
//By value
void bar(int x){
  //In here "x" is a copy of the value of the variable x (in terms of the main)
  x = 3;
}

//By reference
// int *x is defining a pointer to a variable of type int, calling it x
// x is a pointer eg 0xfff3256424
// *x is a value  eg 23
void foo(int *x){ //Defined a pointer
  //In here "x" is the address of x ~= &x (in terms of the main)
 (*x) = 5;  //Derefenced pointer, so it's a value
}

//Lets get rid of a star!
typedef int *pInt; //Define a type, when dereferenced is an int, called pInt
void baz(pInt x){
  (*x) = 10;
}

void main(void){
  int x = 0;  //<--- Located at some address in memory
  printf("x = %d\n", x); //x = 0
  bar(x);     //<--- Pass the value stored at that address
  printf("x = %d\n", x); //x = 0
  foo(&x);    //<--- Creates a reference, pass it's address instead
  printf("x = %d\n", x); //x = 5
  baz(&x);    //<--- Creates a reference, pass it's address instead
  printf("x = %d\n", x); //x = 10
}

