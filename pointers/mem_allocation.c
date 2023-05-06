#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  char *str = NULL;

  printf("Size of char: %lu\n\n", sizeof(str));

  // NOTES Will throw segmentation fault since *str has no memory allocated
  // strcpy(str, "hello");
  
  // Initial Memory Allocation
  str = (char *) malloc(15 * sizeof(char));
  strcpy(str, "hello");
  printf("The char:\t%s\n", str);
  printf("Char Address: %p\n\n", str);

  // Reallocating Memory
  str = (char *) realloc(str, 25 * sizeof(char));
  strcat(str, "world!");
  printf("The char:\t%s\n", str);
  printf("Char Address: %p\n", str);

  free(str);

  return 0;
}