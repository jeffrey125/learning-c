#include <stdio.h>

int main()
{
  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101
  int result = 0; 

  // You evaluate each bit position with AND (Just like how the AND works in any programming language) e.g. 0 & 1 = 0

  result = a & b; // 0000 1100 = 12

  printf("Total Result: %d", result);

  return 0;
}