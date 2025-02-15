#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);

    // %p is the format specifier for pointers
    // &num is the address of the variable num
    // (void*) is a typecast to void pointer
    // sary hi necessary hai, bger void k address sahi print nae hoga;
    // 42 ka address 0x7fffbf4b1bfc hae; 
    printf("Address of %i is %p\n", num, (void *)&num);
}