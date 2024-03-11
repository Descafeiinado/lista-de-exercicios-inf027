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
  int second = (number % 16) / 8;
  int third = ((number % 16) % 8) / 4;
  int fourth = (((number % 16) % 8) % 4) / 2;
  int fifth = (((number % 16) % 8) % 4) % 2;
  int binary = (first * 10000) + (second * 1000) + (third * 100) + (fourth * 10) + fifth;

  printf("Result:\n");
  printf(" - Binary: %.5d", binary);
}