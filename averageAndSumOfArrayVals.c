#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%i", &n);

    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter value at %i: ", i + 1);
        scanf("%i", &arr[i]);
        sum += arr[i];
    }

    float avg = sum / n;
    printf("Sum is: %i\n", sum);
    printf("Average is: %f\n", avg);
}