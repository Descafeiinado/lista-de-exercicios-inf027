/*
* Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.
*/
#include <stdio.h>

void main() {
  float base;
  float height;

  printf("Insert the base of your rectangle: ");
  scanf("%f", &base);

  printf("Insert the height of your rectangle: ");
  scanf("%f", &height);

  printf("The inserted values were %.2fx%.2f\n", base, height);

  float area = base * height;
  float perimeter = 2 * (base + height);

  printf("Results:\n");
  printf(" - Area: %.2f\n", area);
  printf(" - Perimeter: %.2f", perimeter);
}