#include <stdio.h>

int main()
{
  FILE *fp;
  int ch;

  fp = fopen("write_char.txt", "w+");

  // Write ANSI characters from 33 to 100
  for (ch = 33; ch <= 100; ch++)
  {
    fputc(ch, fp);
  }

  fclose(fp);
  fp = NULL;

  fp = fopen("write_capital_alphabets.txt", "w+");

  // Write capital alphabets from A to Z
  for (ch = 65; ch <= 90; ch++)
  {
    fputc(ch, fp);
  }

  fclose(fp);
  fp = NULL;

  return 0;
}