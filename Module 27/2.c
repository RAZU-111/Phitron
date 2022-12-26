#include <stdio.h>
#include <string.h>
void str(char s[], int x)
{
    char swap;
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (s[i] < s[j])
            {
                swap = s[i];
                s[i] = s[j];
                s[j] = swap;
            }
        }
    }
}
int main()
{
    char s[100];
    gets(s);
    int x = strlen(s);
    str(s, x);
    printf("%s ", s);

    return 0;
}