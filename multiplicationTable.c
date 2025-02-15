#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%i * %i = %i\n", num, i, num * i);
    }
}