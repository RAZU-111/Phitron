#include <stdio.h>
int main()
{
    int t, a = 0, pos = 0;
    scanf("%d", &t);
    while (a != t)
    {
        int n, x;
        scanf("%d", &n);
        int arr[1008];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &x);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                pos = i + 1;
                break;
            }
        }
        if (pos == 0)
            printf("Case %d: Not Found\n", a + 1);
        else
            printf("Case %d: %d\n", a + 1, pos);

        ++a;
        pos = 0;
    }
    return 0;
}