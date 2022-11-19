#include <stdio.h>
#include <string.h>
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        char word[25];
        char word2[25];
        int f, r;
        scanf("%s", word);
        int flag = 1;
    
        for (f = 0, r = strlen(word) - 1; f < strlen(word); f++, r--)
        {
            word2[r] = word[f];
        }
        for (f = 0, r = 0; f < strlen(word); f++, r++)
        {
            if (word2[r] != word[f])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            if (strlen(word) > 7)
            {
                printf("Case #2: %c%ld%c\n", word[0], strlen(word) - 2, word[strlen(word) - 1]);
            }
            else
            {
                printf("Case #3: %s\n", word);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }
    }
    return 0;
}