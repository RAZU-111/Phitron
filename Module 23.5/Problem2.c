#include <stdio.h>
void sorting(int arr[], int n)

{
    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < (n - 1); i++)
        {
            int temp;
            {
                if (arr[i] > arr[i + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
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
    sorting(arr, n);



}