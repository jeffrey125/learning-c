#include <stdio.h>

int main()
{
  unsigned int x = 60; // 0011 1100

  printf("\nSize of int in the system is %d bytes\n", sizeof(int));

  int result, shiftValue;

  // NOTES Most int size has 4bytes (32 bits) or you can check it manually by the sizeof operator
  
  // To easily visualize the shifting you can plot it on a 32bit and shift it accordingly
  
  // 0000 0000 0000 0000 0000 0000 0000 0000 - 32bits
   
  // Shift the bit values to the right depending on the right operand
  // If the binary value reaches at the rightmost end of the 32bits it will be dropped

  // Shift to the right by 2 
  shiftValue = 2;
  result = x >> shiftValue; // 0000 1111 = 15  
  printf("Shift to the right by %d: %d\n", shiftValue,result);
  
  // Shift to the right by 4 
  shiftValue = 4;
  result = x >> shiftValue; // 0000 0011 = 3 
  printf("\nShift to the right by %d: %d\n", shiftValue,result);
  
  // Shift to the right by 8
  // NOTES all binary values of 60 will be dropped since it will have no more space leading to 0 decimal value 
  shiftValue = 8;
  result = x >> shiftValue; // 0000 0000 = 0
  printf("\nShift to the right by %d: %d\n", shiftValue,result);

  return 0;
}