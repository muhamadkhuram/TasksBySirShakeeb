#include <stdio.h>

// ye question hi galat hae;
// kyn k agar hum array ki length ko user se input lein gy to humain array ki length ka pata chal jaye ga
// bger length k hum array declare hi nae kar skty
// is liye humain array ki length pehly hi maloom hae to find kea karaingy?

void main()
{
    int num;
    printf("Enter the number of elements: ");
    scanf("%i", &num);

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter element %i: ", i + 1);
        scanf("%i", &arr[i]);
    }

    printf("Total number of values: %i\n", num);
}