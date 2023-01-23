#include <stdio.h>
#include <string.h>

int main(){
  unsigned int inputScore = 0;
  char result[10];

  printf("Input score to see results:");
  scanf("%u", &inputScore);

  if(inputScore >= 10) {
    strcpy(result, "GOOD!");
    printf("Congratulations you %s",result);
    return 0;
  };
  
  if(inputScore >= 5) {
    strcpy(result, "FAIR");
    printf("Congratulations you %s",result);
    return 0;
  };

  strcpy(result, "FAILED");
  printf("Sorry you %s",result);
  
  return 0;
}

