#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        scanf("%d", &n);
        x = n / 4;
        printf("%d %d %d %d\n", x - 3, x - 1, x + 1, x + 3);
    }

    return 0;
}