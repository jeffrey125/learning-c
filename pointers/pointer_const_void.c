#include <stdio.h>

int main()
{
  int numOne = 1;
  float numTwo = 1.2;
  long numThree = 1L;

  const int *pNumOne = NULL;
  const int *const pNumAllConst = &numOne;
  void *pNumVoid = NULL;

  // NOTES pointer to const

  // With this you can't change the value of pNumOne
  pNumOne = &numOne;

  // This will throw a compiler error
  // pNumOne = 12;

  // But you can still reference to other int type
  // pNumOne = &otherIntType
  printf("The value of pNumOne is %d\n\n", *pNumOne);

  // NOTES pointer const
  // You can't dereference the value of the pointer const
  printf("The value of pointer const is %d\n\n", *pNumAllConst);

  // This will throw a compiler error
  // pNumAllConst = 12;
  // pNumAllConst = &otherIntType

  // NOTES void pointer
  // Void pointer can have any type (Dynamic Types) and when dereferencing you need to define the type.

  // Float
  pNumVoid = &numTwo;

  // Defining Type on the dereference pointer for float type
  printf("The value of pNumVoid is %.2f\n\n", *(float *)pNumVoid);

  // Long
  pNumVoid = &numThree;

  // Defining Type on the dereference pointer for long type
  printf("The value of pNumVoid is %ld", *(long *)pNumVoid);

  return 0;
}