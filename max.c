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

	return 0;
}

#endif
