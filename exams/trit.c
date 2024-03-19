#include <stdio.h>

void main() {
    int tritSequence;
    
    scanf("%d", &tritSequence);
    
    int firstNumber = tritSequence > 999 ? tritSequence / 1000 : 1;
    int secondNumber = tritSequence > 99 ? (tritSequence % 1000) / 100 : 1;
    int thirdNumber = tritSequence > 9 ? (tritSequence % 100) / 10 : 1;
    int fourthNumber = tritSequence >= 0 ? (tritSequence % 10) : 1;
    
    int result = 0;
    
    result = firstNumber == 1 ? result : firstNumber == 2 ? result + 27 : result + -(27);
    result = secondNumber == 1 ? result : secondNumber == 2 ? result + 9 : result + -(9);
    result = thirdNumber == 1 ? result : thirdNumber == 2 ? result + 3 : result + -(3);
    result = fourthNumber == 1 ? result : fourthNumber == 2 ? result + 1 : result + -(1);
    
    printf("Result: %d", result);
}
