#include <stdio.h>
void solv(int arr[], int n)
{
    int k, count = 0;
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != k)
            count++;
    }

    printf("%d", count);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    solv(arr, n);
}