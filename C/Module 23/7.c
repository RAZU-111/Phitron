#include <stdio.h>
int find_median(int ar[], int a)
{
    int swap = 0, sum = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (ar[i] >= ar[j])
            {
                swap = ar[i];
                ar[i] = ar[j];
                ar[j] = swap;
            }
        }
    }
    if (a % 2 == 1)
        return ar[a / 2];
    else
    {
        sum = ar[a / 2] + ar[(a / 2) - 1];
        return (sum / 2);
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }
    int x = find_median(ary, a);
    printf("%d ", x);
    return 0;
}