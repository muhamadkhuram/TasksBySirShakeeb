#include <stdio.h>

void main()
{
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    printf("Length of the string is %i\n", length);
}