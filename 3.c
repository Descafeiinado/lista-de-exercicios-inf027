/*
* Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.
*/
#include <stdio.h>
#define PI 3.14

void main() {
  float radius;

  printf("Insert the radius of your circumference: ");
  scanf("%f", &radius);

  float area = PI * (radius * radius);
  float perimeter = 2 * PI * radius;

  printf("Results:\n");
  printf(" - Area: %.2f\n", area);
  printf(" - Perimeter: %.2f", perimeter);
}