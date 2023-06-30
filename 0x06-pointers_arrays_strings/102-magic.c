#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;

    /*
     * Corrected line of code:
     * Assign the value 98 to the memory location that is 3 integers ahead of the address stored in p
     * (assuming the size of int is 4 bytes on your system)
     */
    *(p + 3) = 98;

    /* ...so that this prints 98\n */
    printf("a[2] = %d\n", a[2]);
    return 0;
}
