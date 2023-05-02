#include <stdio.h>

void squareNumber(int *const pNumToSqure)
{
  *pNumToSqure *= *pNumToSqure;
}

int main()
{
  int numInput = 0;
  printf("Hi there what number would you like to multiply itself?\t");
  scanf("%d", &numInput);

  squareNumber(&numInput);
  printf("\n\nThe result is: %d\n", numInput);

  return 0;
}