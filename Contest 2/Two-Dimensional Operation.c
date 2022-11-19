#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[101][101];
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {

            if(arr[i][j] == i && arr[i][j] == j)
            {
                printf("%d ",(arr[i][j])+3);
            }
            else if(arr[i][j] == i)
            {
                printf("%d ",(arr[i][j])+2);
            }
            else if(arr[i][j] == j)
            {
                printf("%d ",(arr[i][j])+1);
            }
            else
            {
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
}