#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%i", &a);
    printf("Enter the second number: ");
    scanf("%i", &b);
    printf("Enter the third number: ");
    scanf("%i", &c);

    if (a >= b && a >= c)
    {
        printf("%i is the largest.\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%i is the largest.\n", b);
    }
    else
    {
        printf("%i is the largest.\n", c);
    }
}