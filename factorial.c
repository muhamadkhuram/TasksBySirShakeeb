#include <stdio.h>

void main()
{
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%i", &num);

    // misaal ly lo; k number 5 hai
    // to loop ma calculation hoga 1*2*3*4*5
    // jo k factorial find karny ka easiest method hae;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %i is %i\n", num, factorial);
}