#include <stdio.h>
void main()
{
  int i, fact = 1, num;

  printf("Enter the number : ");

  scanf("%d", &num);

  for(i = 1; i <= num; i++)
  {

      fact = fact* i;

  }
  printf("The Factorial of %d is: %d\n", num, fact);
}
