#include <stdio.h>

int main()
{
  FILE *fp;

  fp = fopen("write_char_string.txt", "w+");

  if (fp == NULL)
  {
    perror("File Access Error");
    return (-1);
  }

  // Write a string
  fputs("This is a string.\n", fp);
  fputs("This is another string and Hello world!\n", fp);

  fclose(fp);

  return 0;
}