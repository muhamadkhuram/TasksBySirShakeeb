#include <stdio.h>

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    printf("Address of %i is %p\n", num, (void*)&num);
}