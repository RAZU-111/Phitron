#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
       printf("A is bigger");
    }
     if (b>a && b>c)
    {
       printf("B is bigger");
    }
     if (c>a && c>b)
    {
       printf("C is bigger");
    }

    if (a==b && b==c && c==a)
    {
        printf("They are equal");

    }
    
   return 0;
}