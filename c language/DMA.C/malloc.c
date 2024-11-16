#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr = (int *)malloc(100 * sizeof(int));
    printf("%d", ptr);
}