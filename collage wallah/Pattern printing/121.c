#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+2; j++)
        {
           if((i+j)%2==0)
           printf("1 ");
           else
           printf("2 ");
        }
        printf("\n");
    }
}