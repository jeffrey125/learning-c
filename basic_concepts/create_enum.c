#include <stdio.h>

int main(){
  enum company
  {
    GOOGLE,
    FACEBOOK,
    XEROX,
    YAHOO,
    EBAY,
    MICROSOFT,
  };

  enum company xeroxComp = XEROX;
  enum company googleComp = GOOGLE;
  enum company ebayComp = EBAY;

  printf("\nYou have entered the ff: XEROX-%d, GOOGLE-%d, EBAY-%d\n",xeroxComp,googleComp,ebayComp);

  return 0;
};

