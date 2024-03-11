/*
* Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura.
*/
#include <stdio.h>
#define PI 3.14

void main() {
  float radius;
  float height;

  printf("Insert the radius of the can: ");
  scanf("%f", &radius);

  printf("Insert the height of the can: ");
  scanf("%f", &height);

  float volume = PI * (radius * radius) * height;

  printf("Result:\n");
  printf(" - Volume: %.2f", volume);
}