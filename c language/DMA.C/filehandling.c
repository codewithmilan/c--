#include <stdio.h>
int main()
{
    FILE *ptr = fopen("milan.txt", "r");
    char str[40];
    while (fgets(str, 40, ptr) != NULL)
    {
        printf("%s", str);
    }

    FILE *fileptr = fopen("basant.txt", "w");
    char arr[45] = " This is dynamically add text in basant file .";
    fputs(arr, fileptr);
    fclose(fileptr);
    return 0;
}