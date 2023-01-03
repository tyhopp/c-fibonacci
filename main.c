#include <stdio.h>
#include "fibonacci.h"

int main()
{
  for (int i = 0; i < 20; i++)
  {
    printf("%i\n", fibonacci());
  }
}