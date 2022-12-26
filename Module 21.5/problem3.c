#include <stdio.h>
int solv(int ar[], int size)
{
    int sum = 0, x = 0, r = 0;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < size; i++)
    {
        r = ar[i] % 10;
        sum += r;
        ar[i] = ar[i] / 1000;
        x = ar[i] % 10;
        sum += x;
    }
    return sum;
}
int main()
{
    int n;
  
    scanf("%d", &n);
    int arr[n];
    int res = solv(arr,n);
    printf("%d", res);
    
}