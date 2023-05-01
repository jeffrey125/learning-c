#include <stdio.h>

void copyString(char *to, char *from)
{
  // null character /0 is a falsy value that will stop the loop
  while (*from)
  {
    // Behind the scene
    printf("to[i]:%c = from[]: %c\n", *to, *from);
    
    *to++ = *from++;
  }

  // Add a null character at the end of the iteration
  *to = '\0';
}

int main ()
{
  char string1[] = "Hello world lorem ipsum!";
  char string2[50];

  copyString(string2, string1);

  printf("The output of the copied string without string c library:\n %s\n", string2);

  return 0;
}