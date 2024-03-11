/*
* Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.
*/
#include <stdio.h>

void main() {
  int dividend;
  int divisor;

  printf("Insert the dividend: ");
  scanf("%d", &dividend);

  printf("Insert the divisor: ");
  scanf("%d", &divisor);

  printf("Dividing %d by %d...\n", dividend, divisor);

  int quotient = dividend / divisor;
  int remainder = dividend % divisor;

  printf("Result:\n");
  printf(" - Quotient: %d\n", quotient);
  printf(" - Remainder: %d", remainder);
}