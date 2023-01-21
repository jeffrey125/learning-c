#include <stdio.h>

int main()
{
  unsigned int a = 60; // 0011 1100
  int result = 0; 

  // You evaluate each bit position with NOT then invert it (similar to any NOT keyword in programming)

  result = ~a; // 1100 0011 = 61

  // NOTES The leftmost bit is a sign bit so if its 1 then it is negative and vice versa.

  printf("Total Result: %d", result);

  return 0;
}