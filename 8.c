/*
*  Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um
*  valor de temperatura em Fahrenheit e exibi-lo em Celsius.
*/
#include <stdio.h>

void main() {
  float fahrenheit;

  printf("Insert the degrees in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  float celsius = (fahrenheit - 32) / 1.8;

  printf("Result:\n");
  printf(" = %.2f °C", celsius);
}
