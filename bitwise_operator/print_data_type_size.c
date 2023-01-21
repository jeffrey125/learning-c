#include <stdio.h>
#include <stdbool.h>

int main()
{
  enum gender
  {
    MALE,
    FEMALE,
  } mygender;

  printf("\nChar size: %i bytes\n",sizeof(char));
  printf("\nInt size: %i bytes\n",sizeof(int));
  printf("\n_Bool size: %i bytes\n",sizeof(_Bool));
  printf("\nbool size: %i bytes\n",sizeof(bool));
  printf("\nGender enum size: %i bytes\n",sizeof(mygender));
  printf("\nlong size: %i bytes\n",sizeof(long int));
  printf("\nlong long size: %i bytes\n",sizeof(long long int));
  printf("\ndouble size: %i bytes\n",sizeof(double));
  printf("\nlong double size: %i bytes\n",sizeof(long double));

  return 0;
}