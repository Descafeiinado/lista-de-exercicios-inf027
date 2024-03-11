/*
* Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.
*/
#include <stdio.h>

void main() {
  int age;

  printf("Insert the age in days: ");
  scanf("%d", &age);

  int years = age / 365;
  int months = (age % 365) / 30;
  int days = (age % 365) % 30;

  printf("Result:\n");
  printf(" - Years: %d\n", years);
  printf(" - Months: %d\n", months);
  printf(" - Days: %d", days);
}