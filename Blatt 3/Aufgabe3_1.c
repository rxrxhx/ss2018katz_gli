#include <stdio.h>
#define scanf_s scanf
int main()
{
  char string[11];

  printf("Geben Sie ihre Zeichen ein: ");
  scanf_s("%[^'\n']", &string);

  printf("\nEingabe war: %s \n", string);
}
