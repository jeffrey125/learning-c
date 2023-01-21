#include <stdio.h>

int main(){
  // Initialize variables for rectangle
  double width, height, perimeter, area;

  printf("Enter a value for the width and height (seperator is space):");

  scanf("%lf %lf", &width, &height);

  printf("\nYou've entered the ff - Width-%lf and Height-%lf\n", width, height);

  area = width*height;

  printf("\nThe area of the rectangle is %lf\n", area);

  perimeter = 2 * (width + height);

  printf("\nThe perimeter of the rectangle is %lf\n", perimeter);

  return 0;
};

