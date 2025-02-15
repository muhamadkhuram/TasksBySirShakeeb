#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of elements you want in the array: ");
    scanf("%i", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at %i: ", i + 1);
        scanf("%i", &arr[i]);
    }

    int max = arr[0], min = arr[0];


    /// loop laga k match karwa liya k max aur min kis element se bada ya chota hai
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Largest number: %i\n", max);
    printf("Smallest number: %i\n", min);
}