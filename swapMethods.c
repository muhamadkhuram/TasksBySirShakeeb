#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%i %i", &a, &b);
    swap(&a, &b);
    printf("After swapping: %i %i\n", a, b);
}