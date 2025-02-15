#include <stdio.h>

// agar sum of angles 180 hai to triangle valid hai
// agar nahi hai to triangle invalid

void main()
{
    int angle1, angle2, angle3;
    printf("Enter the first angle: ");
    scanf("%i", &angle1);
    printf("Enter the second angle: ");
    scanf("%i", &angle2);
    printf("Enter the third angle: ");
    scanf("%i", &angle3);

    if (angle1 + angle2 + angle3 == 180)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
}