#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%i", &a);
    printf("Enter the second number: ");
    scanf("%i", &b);

    int *ptrA = &a;
    int *ptrB = &b;

    // jb b ki value a mei store hojaye, aur a ki value b mei store hojaye
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    printf("After swapping: %i %i\n", a, b);
}