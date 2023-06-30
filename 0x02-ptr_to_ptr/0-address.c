#include <stdio.h>

int foo(int** ptr, int n){
  *ptr = malloc(n * sizeof(int));

  if (*ptr == NULL){ 
    return -1;
  }
  return 0;
}