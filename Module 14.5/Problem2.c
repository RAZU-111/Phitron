#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<=strlen(str)-1;i++){
        if(str[i]=='0' || str[i]=='1')
        {
            printf("Yes");
        }
        else if (str[i]!='0' || str[i] !=1){
            printf("No");
        }
    }
}