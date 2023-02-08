#include<stdio.h>
int fact(int x);
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);

   int permutation = fact(n)/fact(n-r);
   int combination = fact(n)/(fact(n-r)*fact(r));
   printf("Permutation is  : %d\n",permutation);
   printf("Combenation is : %d\n",combination);

   return 0;
}
int fact(int x)
{
    int res=1;
    for (int  i = 1; i <= x; i++)
    {
       res *= i; 
    }
    return res;
}