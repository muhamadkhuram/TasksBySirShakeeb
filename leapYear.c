#include <stdio.h>

void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%i", &year);

    if (year % 4 == 0)
    {
        printf("%i is a leap year.\n", year);
    }
    else
    {
        printf("%i is not a leap year.\n", year);
    }
}