#include <stdio.h>

int main()
{
  FILE *fp;
  char str[100];

  // Open file
  fp = fopen("file.txt", "r");

  if (fp == NULL)
  {
    perror("File Access Error");
    return (-1);
  }

  // Will read line by line with a maximum of characters you specify (If it encounters EOF will return NULL)
  if (fgets(str, (sizeof(str) - 1), fp) != NULL)
  {
    printf("%s", str);
  }

  fclose(fp);
  fp = NULL;

  return 0;
}