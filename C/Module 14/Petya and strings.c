#include <stdio.h>
#include <string.h>
int main()
{
    char str1[101];
    char str2[101];
    scanf("%s", str1);
    scanf("%s", str2);
    int len = strlen(str1);
    for (int i = 0; i < len; i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
             str1[i] += 32;
        }
        if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
             str2[i] += 32;
        }
    }
    for (int i = 0; i < len; i++)
    {
       if(str1[i]>str2[i])
         {
            printf("1\n");
            return 0;
         } 
         if(str2[i]>str1[i])
         {
            printf("-1\n");
            return 0;
         } 

    }
    printf("0");

    return 0;
}