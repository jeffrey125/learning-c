#include <stdio.h>
#include <string.h>


int charLength(const char *pString)
{
  int charCount = 0;

  while(*pString)
  {
    ++pString;
    ++charCount;
  }

  return charCount;
}

int main()
{
  char stringToCount[] = "Hello World! Lorem Ipsum Test 12345    HELLO!!!! \n HLEOOO!!";

  printf("The length of string without using strlen is: %d\n", charLength(stringToCount));
  printf("The length of string in strlen is: %lu\n", strlen(stringToCount));

  return 0;
}