#include <stdio.h>
int main()
{
  int input, i = 3, count;
  int c;
  printf("Enter the number of prime numbers to print\n");
  scanf("%d", &input);

  if (input >= 1) {
    printf("First %d prime numbers are:\n",input);
    printf("2\n");
  }

  for (count = 2; count <= input;count++)
  {
    for (c = 2; c <= i - 1; c++)
    {
      if (i%c == 0)
        break;
    }
    if (c == i)
    {
      printf("%d\n", i);
      count++;
    }
    i++;
  }

  return 0;
}      