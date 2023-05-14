#include <stdio.h>

int main()
{
  FILE *fp;

  fp = fopen("write_char_string.txt", "w+");

  // Write a string
  fputs("This is a string.\n", fp);
  fputs("This is another string and Hello world!\n", fp);

  fclose(fp);

  return 0;
}