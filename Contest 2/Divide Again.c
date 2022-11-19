#include<stdio.h>
int main()
{
    long long n,res;
    scanf("%lld",&n);
    if(n%3==0)
    {
       res = n/3;
       printf("%lld",res) ;
    }
    else
      printf("-1");

      return 0;
}