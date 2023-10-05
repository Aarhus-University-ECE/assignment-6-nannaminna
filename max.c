#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {
  // Exercise 2
  // Implement your code below...
  assert(size>0);
  int m = numbers[0];
  for(int i=1; i < size; ++i)
  {
    int element = numbers[i];
    if(element>m)
    {
      m=element;
    } 
  }
  return m;
}

#ifndef TEST

int main() {

  printf("hellope\n");

  int array[] = {1, 2, 3, 4, 5};
  printf("max = %d\n", max(array, 5));
	return 0;
}

#endif
