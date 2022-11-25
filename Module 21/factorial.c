#include<stdio.h>
int fact(int x)
{
    int res=1;
    for (int  i = 1; i <= x; i++)
    {
       res *= i; 
    }
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);

   printf("%dth factorial is : %d",n,fact(n));

   return 0;
}