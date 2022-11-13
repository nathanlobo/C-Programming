// Program to count the number of digits in a number(number_of_digits.c)
#include <stdio.h>
int main()
{
  system("cls");
  int i, n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for(i=0;n != 0;i++)
  {
    n/=10;
  }
  printf("Number of digits: %d\n", i);
  return 0;
}