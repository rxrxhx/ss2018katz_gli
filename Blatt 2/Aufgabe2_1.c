#include <stdio.h>
#define scanf_s scanf
int main()
{
  int i = 0;
  int array[5];
  for (i = 0; i < 5; i++)
  {
    printf("Zahl %d = ",i);
    scanf_s("%d",&array[i]);
  }

  printf("\n");

  for (i = 0; i < 5; i++)
  {
    printf("Zahl %d = %d\n", i, array[i]);
  }

  getchar();
}
