#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("input and UnSorted  Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int sorted_ara[n];

    int min, index;

    // Sclection Sort
    for (int j = 0; j < n; j++)
    {
        min = arr[0];
        index = 0;
        for (int i = 0; i < n; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
                index = i;
            }
        }

        sorted_ara[j] = min;
        arr[index] = 9999;
        /*for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        */
    }
    // printf("\n");
    printf("Sorted Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", sorted_ara[i]);
    }

    return 0;
}