#include <stdio.h>

void main()
{
    int length;
    printf("Enter the length of array: ");
    scanf("%i", &length);

    // is sy user sy array k elements input lein gy aur array declare kar di;
    int arr[length];
    int i = 0;
    for (i = 0; i < length; i++)
    {
        printf("Enter element %i: ", i + 1);
        scanf("%i", &arr[i]);
    }
    
    // print array elements, array ko aik hi baar print nae kar skty is liye loop k through print karna hoga
    printf("Array elements: ");
    for (int i = 0; i < length; i++)
    {
        printf("%i ", arr[i]);
    }
}