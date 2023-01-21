#include <stdio.h>

int main()
{
  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101
  int result = 0; 

  // You evaluate each bit position with XOR (Copies only 1 operand but cannot be both)

  result = a ^ b; // 0011 0001 = 49

  printf("Total Result: %d", result);

  return 0;
}