#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr = (int *)malloc(10 * sizeof(int));
    printf("%u\n", ptr);
    ptr = realloc(ptr, 20 * sizeof(int));
    printf("%u", ptr);
}