#include <stdio.h>
#include <string.h>
void print(char s[], int x)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (i % 2 == 1)
            printf("%c%c", s[i], s[i]);
        else
            printf("%c", s[i]);
    }
}

int main()
{
    char s[100];
    scanf("%s", &s);
    int x = strlen(s);
    print(s, x);

    return 0;
}
