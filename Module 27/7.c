#include <stdio.h>
void swaping(int ary[], int *x, int *y)
{
    int swap;
    swap = ary[*x];
    ary[*x] = ary[*y];
    ary[*y] = swap;
}
int main()
{
    int t;
    scanf("%d", &t);
    int ary[t];
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &ary[i]);
    }
    int n, l, r;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &l, &r);
        swaping(ary, &l, &r);
    }
    for (int i = 1; i <= t; i++)
        printf("%d ", ary[i]);

    return 0;
}

