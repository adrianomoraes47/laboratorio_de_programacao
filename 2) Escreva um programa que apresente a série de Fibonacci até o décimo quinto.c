#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, auxiliar, i, n = 15;
  a = 0;
  b = 1;
  printf("Série de Fibonacci: até o 15° termo\n");
  printf("%d\n", b);
  for(i = 1; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
    printf("%d\n", auxiliar);
  }
}


