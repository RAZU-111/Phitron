#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int MAT[n][m];
    for (int  i = 0; i <n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
           scanf("%d",&MAT[i][j]);
        }
        
    }
     for (int  i = 0; i <m; i++)
    {
        for (int  j = 0; j < n; j++)
        {
           printf("%d  ",MAT[j][i]);
        }
        printf("\n");
    }
    

    return 0;
}