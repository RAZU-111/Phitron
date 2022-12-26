#include <stdio.h>
int div_3(int ary[], int t)
{
    int count1 = 0;
    for (int i = 1; i <= t; i++)
    {
        if (ary[i] % 3 == 0)
            count1++;
    }
    return count1;
}
int div_5(int ary[], int t)
{
    int count2 = 0;
    for (int i = 1; i <= t; i++)
    {
        if (ary[i] % 5 == 0)
            count2++;
    }
    return count2;
}
int main()
{
    int t, count3 = 0;
    scanf("%d", &t);
    int ary[t];
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &ary[i]);
    }
    int x = div_3(ary, t);
    int y = div_5(ary, t);
    for (int i = 1; i <= t; i++)
    {
        if (ary[i] % 5 == 0 && ary[i] % 3 == 0)
            count3++;
    }
    if ((x + y) - count3 > 0)
        printf("%d\n", (x + y) - count3);
    else
        printf("-1\n");

    return 0;
}

