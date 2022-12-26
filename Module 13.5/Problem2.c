#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    scanf("%s",&str);
    int I_len =0;
    int S_len  = strlen(str)-1;
    while (S_len > I_len)
    {
        if(str[I_len++] !=str[S_len--]){

        printf("No");
        return 0;

      }      
    }
    printf("Yes");
    
   return 0;

}