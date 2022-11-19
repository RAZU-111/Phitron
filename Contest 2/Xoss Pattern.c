#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    if(n==1)
    {
        printf("1");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    for (i = 2; i < n ; i++)
    {
        printf("%d", i);
        for (j = 2; j < n ; j++)
        {
            printf(" ");
        }
        printf("%d\n", n);
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d", n);
    }
}