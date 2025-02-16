#include <stdio.h>

void main()
{
    int length;
    printf("Enter the number of elements: ");
    scanf("%i", &length);

    int arr[length];
    int i = 0;
    for (i = 0; i < length; i++)
    {
        // + 1 is liye kyunke i 0 se start hota hae
        printf("Enter element %i: ", i + 1);
        scanf("%i", &arr[i]);
    }

    // by default max aur min ko pehle element se initialize kar diya lkn baaad ma loop laga k check karain gy;
    int max = arr[0], min = arr[0];
    for (int i = 1; i < length; i++)
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