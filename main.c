#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <conio.h>

char C;
char I = 0;

int main (void)
{
  printf ("Press q to quit. Otherwise incrament.");
  while (true)
  {
    C = getch ();
    printf ("I = %i\n", I);
    I = I + 1;
    if (C == 'q')
    {
      break;
    }
  }
  return 0;
}
