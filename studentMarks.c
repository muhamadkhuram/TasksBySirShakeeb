#include <stdio.h>

void main()
{
    int rollNo, phy, chem, comp, total, percentage;
    printf("Enter Roll Number: ");
    scanf("%i", &rollNo);
    printf("Enter marks in Physics: ");
    scanf("%i", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%i", &chem);
    printf("Enter marks in Programming : ");
    scanf("%i", &comp);

    total = phy + chem + comp;

    // ye farz karty hvy k har subject k total marks 100 hain
    percentage = total / 3;

    printf("Roll No: %i\n", rollNo);
    printf("Marks in Physics: %i\n", phy);
    printf("Marks in Chemistry: %i\n", chem);
    printf("Marks in Programming : %i\n", comp);
    printf("Total Marks = %i\n", total);
    printf("Percentage = %i\n", percentage);

    if (percentage >= 60)
    {
        printf("Division = First\n");
    }
    else if (percentage >= 45)
    {
        printf("Division = Second\n");
    }
    else
    {
        printf("Division = Third\n");
    }
}