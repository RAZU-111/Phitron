#include <stdio.h>
#include <string.h>
void solv(char s[])
{
    long long  count1 = 0, count2 = 0, count3 = 0;
   
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '1')
            count1++;
        if (s[i] == '7')
            count2++;
        if (s[i] == '9')
            count3++;
    }
    if (count1 > 0 && count2 > 0 && count3 > 0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    char str[200];
     scanf("%s",str);

    solv(str);
 
}