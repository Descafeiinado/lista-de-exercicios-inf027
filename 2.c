#include <stdio.h>

void main() {
  float side; 

  printf("Insert the side of your square: ");
  scanf("%f", &side);

  float area = side * side;
  float perimeter = side * 4;

  printf("Results:\n");
  printf(" - Area: %.2f\n", area);
  printf(" - Perimeter: %.2f", perimeter);
}
