#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void storeText(){
  char *pStr = NULL;
  int inputStrSize = 0;

  // Memory Allocation
  printf("\n- What is the size of the text you want to input: ");
  scanf("%d", &inputStrSize);

  pStr = (char *) malloc(inputStrSize * sizeof(char));

  // Inputting Text values
  printf("\n- Please input the text you want to store: ");

  // Guard check if the pChar value can store the text
  if(pStr == NULL) {
    printf("\nFailed to allocate memory to store text!\n");
    free(pStr);
    exit(1);
  }

  scanf(" ");
  fgets(pStr, (inputStrSize * sizeof(char)), stdin);
  printf("Inputted text is: %s\n", pStr);

  free(pStr);
  pStr = NULL;
}

int main(){
  char userAnswer = 'Y';
  bool continueProgram = userAnswer == 'Y';

  printf("-------- Welcome to text string printer CLI v0.0.1 ! --------\n\n");

  storeText();
  
  return 0;
}


