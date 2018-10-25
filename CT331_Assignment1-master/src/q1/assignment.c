#include <stdio.h>

int main(int arg, char* argc[]){
 int a;
 int* b;
 long c;
 double* d;
  char** e;
  printf("size of int = %d", sizeof(a));
  printf("size of int* = %d", sizeof(b));
  printf("size of long = %d", sizeof(c));
  printf("size of double* = %d", sizeof(d));
  printf("size of char** = %d", sizeof(e));
 
  
 
  return 0;
}
