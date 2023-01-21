#include <stdio.h>

int main(){
  // We define a variables first 
  char str[100];
  int i;

  printf("Enter a value:");

  // Point the variable
  scanf("%d %s", &i, str);

  printf("\nYou entered: %d %s\n", i,str);

  return 0;
}