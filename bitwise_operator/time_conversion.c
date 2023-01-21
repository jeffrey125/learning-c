#include <stdio.h>

int main()
{
  int inputMinutes =0;
  double minutesYear = 0.0;
  double years = 0.0;
  double days = 0.0;

  printf("Enter the value of minutes for conversion:");
  
  scanf("%d", &inputMinutes);

  minutesYear =  60 * 24 * 365;
  years =  inputMinutes / minutesYear;
  days = years * 365;

  printf("\nMinutes Years: %lf\n", minutesYear);
  printf("\nYears: %lf\n", years);
  printf("\nDays: %2f\n", days);

  return 0;
}