#include <stdio.h>

int main()
{
  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101
  int result = 0; 

  // You evaluate each bit position with OR (Just like how the OR works in any programming language) e.g. 0 & 1 = 1

  result = a | b; // 0011 1101 = 61

  printf("Total Result: %d", result);
}