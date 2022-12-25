#include <stdio.h>
int is_prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        for (int i = l; i <= r; i++)
        {
            if (is_prime(i))
                printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}