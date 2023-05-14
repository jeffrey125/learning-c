#include <stdio.h>

int main()
{
  FILE *fp;

  fp = fopen("write_formatted_char_string.txt", "w+");

  // Write a formatted string
  fprintf(fp, "%s %s %s %s %s %s %d", "This", "is", "a", "formatted", "string", "Dated", 2023);

  fclose(fp);
  fp = NULL;

  return 0;
}