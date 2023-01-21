#include <stdio.h>

int main()
{
  unsigned int x = 60; // 0011 1100
 
  int result, shiftValue;

  // NOTES Most int size has 4bytes (32 bits) or you can check it manually by the keyword sizeof
  
  // To easily visualize the shifting you can plot it on a 32bit and shift it accordingly
  
  // 0000 0000 0000 0000 0000 0000 0000 0000 - 32bits
   
  // Shift the bit values to the right depending on the right operand
  // If the binary value reaches at the rightmost end of the 32bits it will be dropped

  // Shift to the left by 2 
  shiftValue = 2;
  result = x << shiftValue; // 1111 0000 = 240
  printf("Shift to the left by %d: %d\n", shiftValue,result);
  
  // Shift to the left by 4 
  shiftValue = 4;
  result = x << shiftValue; // 0011 1100 0000 = 960
  printf("\nShift to the left by %d: %d\n", shiftValue,result);
  
  // Shift to the left by 8 
  shiftValue = 8;
  result = x << shiftValue; // 0011 1100 0000 0000
  printf("\nShift to the left by %d: %d\n", shiftValue,result);

  return 0;
}