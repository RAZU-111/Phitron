#include <stdio.h>
#include <string.h>
void even(int x)
{
    for (int i = 2; i <= x; i += 2)
        printf("%d ", i);
}
void odd(int x)
{
    for (int i = 1; i <= x; i += 2)
        printf("%d ", i);
}
void Find_Number(int n, int k)
{
    int x = 2, y = 1;
    int arr[n];
    for (int i = 1; i <= n / 2; i++)
    {
        arr[i] = x;
        x += 2;
    }

    for (int j = (n / 2) + 1; j <= n; j++)
    {
        arr[j] = y;
        y += 2;
    }
    printf("The %dth element in this sequence is %d\n", k, arr[k]);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    even(n);
    odd(n);
    printf("\n");
    Find_Number(n, k);
}