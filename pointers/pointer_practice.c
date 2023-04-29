#include <stdio.h>

int main()
{
  int numOne = 0;
  int numTwo = 0;
  int *pNum = NULL;

  // Assign pointer pNum to the address of numOne
  pNum = &numOne;
  
  *pNum = 5;

  printf("The value of numOne is %d\n", numOne); // 5
  printf("The dereference value of pNum is %d\n\n", *pNum); // 5

  *pNum = ++numOne;
  printf("The value of numOne is %d\n\n", numOne); 


  // Reference it to numTwo

  pNum = &numTwo;

  *pNum = 10;

  *pNum = numOne + numTwo;

  printf("The value of numTwo is %d\n", numTwo);
  printf("The dereference value of pNum is %d\n", *pNum);

  return 0;
}