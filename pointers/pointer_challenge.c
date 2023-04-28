#include <stdio.h>

int main()
{
  int sampleNumber = 8;
  int *pSampleNumber = NULL;

  printf("This is the current value of the pointer %p \n\n", pSampleNumber);

  // Reference sample number to pSampleNumber pointer
  pSampleNumber = &sampleNumber;

  printf("The value of the pointer: %p \n", pSampleNumber);
  printf("The address of the pointer: %p \n", (void*)&pSampleNumber);
  printf("The reference value of the pointer: %d \n", *pSampleNumber);
  printf("The size of the pointer: %d \n", sizeof(pSampleNumber));
}