#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,res=0;
    char str[20];
    scanf("%s",str);
    scanf("%d%d",&a,&b);
    int len = strlen(str)-1;
    for(int i=0;i<=len;i++){
        if(str[i]=='+')
          res += a+b;
          if(str[i]=='*')
          res += a*b;
    }
    printf("%d",res);
    
    return 0;
}