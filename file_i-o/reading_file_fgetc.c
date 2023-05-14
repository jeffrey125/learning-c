#include <stdio.h>

int main()
{
  FILE *fp;
  int c;

  // This is how you access a file
  // fopen opens the file with read mode
  fp = fopen("file.txt", "r");

  if (fp == NULL)
  {
    // This how you define an error message
    perror("File Access Error");
    return (-1);
  }

  // Iteration to read the characters using fgetc
  while ((c = fgetc(fp)) != EOF)
  {
    printf("%c", c);
  }

  // Closes the file when not in use
  fclose(fp);
  fp = NULL;

  return 0;
}