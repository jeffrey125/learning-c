#include <stdio.h>
#include <string.h>

// A program that show how pointer arithmetic works
int main()
{
  int i;
  char multiple[] = "Hello World!";
  char *pMultiple = multiple;

  
  for (i = 0; i < strlen(multiple); ++i)
    printf("multiple[%d] = %c |\t *(p+%d) = %c |\t &multiple[%d] = %p |\t p+%d = %p |\n", i, multiple[i], i, *(pMultiple + i), i, &multiple[i], i, pMultiple + i);

  // So when you add an int type to a pointer it will give you a result of the memory address of it.
  // You can dereference it to get the value 

  return 0;
}

  