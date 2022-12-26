#include<stdio.h>
#include<string.h>
int main()
{
    char str[26];
    scanf("%s",&str);
    int len = strlen(str)-1;
    int vowel =0;
    int consonant =0;
    for (int  i = 0; i <= len; i++)
    {
        if(str[i]=='a' || str[i] == 'e' || str[i]=='i' || str[i]=='o' || str[i]== 'u')
         vowel++;
        else
          consonant++;
    }
    printf("vowel : %d\nconsonant: %d",vowel,consonant);

    return 0;
}