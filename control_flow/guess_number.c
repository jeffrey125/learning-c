#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  _Bool isCorrect = 0;
  unsigned int answer = 0;
  unsigned int chancesLeft = 5;
  
  // Random Number Generator
  time_t t;
  srand((unsigned) time(&t));
  unsigned int numToGuess = rand() % 6;

  printf("Welcome to Guess Your Number!\n");
  
  do  {
    printf("\nPlease input your answer: ");
    scanf("%i", &answer);

    if(answer == numToGuess) {
      isCorrect = 1;
      return printf("\nCongratulations you win the number is %i\n", numToGuess);
    } else {
      chancesLeft = --chancesLeft;
      printf("\nSorry Wrong Answer! \nRemaining Life: %i\n", chancesLeft);
    };

    } while (isCorrect == 0 && chancesLeft != 0);


  if(!isCorrect && chancesLeft == 0){
    return printf("\nBetter luck next time the number is %i\n", numToGuess);
  }

  return 0;
}