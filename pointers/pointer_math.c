#include <stdio.h>

int arraySum(int array[], const int n)
{
  int sum = 0, *ptr = NULL;
  int *const arrayEnd = array + n; // Pointer arithmetic you assign the pointer that it is n ahead of the array.

  for (ptr = array; ptr < arrayEnd; ++ptr)
    sum += *ptr;

    return sum;
}

int main()
{
  int arraySum(int array[], const int n);
  int values[] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

  // NOTES Not optimal solution for finding the size of array but for this case it can work
  // Read https://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
  const int valuesLength = sizeof(values) / sizeof(values[0]);
  printf("Size of array %d\n\n", valuesLength);

  printf("The sum is %i\n", arraySum(values, valuesLength));

  return 0;
}

  