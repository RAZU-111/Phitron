#include <stdio.h>
int prime_check(int a)
{

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
double avg_check(int ary[], int t)
{
    int sum = 0, count = 0;
    for (int i = 0; i < t; i++)
    {
        if (ary[i] % 2 == 0)
        {
            sum += ary[i];
            count++;
        }
    }
    return (double)sum / count;
}
int main()
{
    int t, x, count1 = 0;
    double y;
    scanf("%d", &t);
    int ary[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &ary[i]);
    }
    for (int i = 0; i < t; i++)
    {
        x = prime_check(ary[i]);
        if (x == 1)
            count1++;
    }

    y = avg_check(ary, t);
    printf("Prime Numbers : %d\n", count1);
    printf("Average of even numbers : %.3lf\n", y);
    return 0;
}