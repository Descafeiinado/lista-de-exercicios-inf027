/*
* Dado os três lados de um triângulo determinar o perímetro do mesmo.
*/
#include <stdio.h>

void main() {
  float firstSide;
  float secondSide;
  float thirdSide;

  printf("Insert the first side of the triangle: ");
  scanf("%f", &firstSide);
  
  printf("Insert the second side of the triangle: ");
  scanf("%f", &secondSide);
  
  printf("Insert the third side of the triangle: ");
  scanf("%f", &thirdSide);

  float perimeter = firstSide + secondSide + thirdSide;

  printf("Result:\n");
  printf(" - Perimeter: %.2f\n", perimeter);
}