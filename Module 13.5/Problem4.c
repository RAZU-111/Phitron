#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int m1[n][m], m2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = m1[i][j] + m2[i][j];

            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}