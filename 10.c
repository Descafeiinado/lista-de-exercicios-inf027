/*
 * Converter um inteiro informado menor que 32 para sua representação em binário
 */
#include <stdio.h>

void main()
{
  int number;

  printf("Insert the desired number: ");
  scanf("%d", &number);

  int first = number / 16;
  int second = (number / 8) % 2;
  int third = (number / 4 ) % 2;
  int fourth = (number % 2) % 2;
  int fifth = number % 2;
  int binary = (first * 10000) + (second * 1000) + (third * 100) + (fourth * 10) + fifth;

  printf("Result:\n");
  printf(" - Binary: %.5d", binary);
}