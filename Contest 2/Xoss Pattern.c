#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);

    int x = n;
    k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1)
                printf("%d", j);
            else if (j == 1)
                printf("%d", i);
            else if (i == n)
                printf("%d", --x);
            else if (j == n)
                printf("%d", --k);
                else 
                printf(" ");
        }
        printf("\n");
    }
}