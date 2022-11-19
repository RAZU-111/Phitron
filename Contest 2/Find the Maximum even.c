#include <stdio.h>
int main()
{
    int n, max_even = 0;
    scanf("%d", &n);
    int ar[22]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((ar[i] + ar[j]) % 2 == 0 && (ar[i] + ar[j]) > max_even)
            {
                max_even = (ar[i] + ar[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max_even)
            max_even = ar[i];
    }
    printf("%d\n", max_even);

    return 0;
}