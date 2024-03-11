/*
* Ler um número inteiro e exibir o seu sucessor.
*/
#include <stdio.h>

void main() {
  int number;

  printf("Insert a number: ");
  scanf("%d", &number);

  int successor = number + 1;

  printf("Result:\n");
  printf(" - Successor: %d", successor);
}