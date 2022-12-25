#include <stdio.h>
int main()
{
    int n, swap;
    scanf("%d", &n);
    int ary1[105], ary2[105];
    for (int i = 0; i < n; i++)
        scanf("%d", &ary1[i]);
    for (int j = 0; j < n; j++)
        scanf("%d", &ary2[j]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ary1[i] < ary1[j])
            {
                swap = ary1[i];
                ary1[i] = ary1[j];
                ary1[j] = swap;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ary2[i] > ary2[j])
            {
                swap = ary2[i];
                ary2[i] = ary2[j];
                ary2[j] = swap;
            }
        }
    }
    for (int i = 0; i < n; i++)
        ary2[i] = ary1[i] - ary2[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ary2[i] > ary2[j])
            {
                swap = ary2[i];
                ary2[i] = ary2[j];
                ary2[j] = swap;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", ary2[i]);

    return 0;
}