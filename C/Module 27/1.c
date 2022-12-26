#include <stdio.h>
int main()
{
    int n, sum = 0, a = 0, sum2 = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        ++a;
        if (a == 3)
        {
            i += 3;
            a = 0;
        }
    }
    a = 0;
    for (int i = 4; i <= n; i++)
    {
        sum2 += i;
        ++a;
        if (a == 3)
        {
            i += 3;
            a = 0;
        }
    }
    if (sum > sum2)
        printf("%d ", sum - sum2);
    else
        printf("%d ", sum2 - sum);
    return 0;
}