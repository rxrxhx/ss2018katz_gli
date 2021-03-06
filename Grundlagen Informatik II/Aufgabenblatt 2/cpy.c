#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

int main(int argc, char **argv)
{
  FILE *source;
  FILE *dest;
  char buffer[BUFFER_SIZE];

  if (argc < 3)
  {
      printf("Fehler: Dateipfad fehlt!\n");
      return (1);
  }
  source = fopen(argv[1], "r");
  dest = fopen(argv[2], "w");

  if (source == NULL)
  {
      printf("Fehler: %s wurde nicht gefunden\n", argv[1]);
      return (1);
  }

  while (!feof(source))
  {
    fgets(buffer, BUFFER_SIZE, source);
    fprintf(dest,"%s", buffer);
  }

  printf("\n");
  fclose(dest);
  fclose(source);
  return (0);
}
