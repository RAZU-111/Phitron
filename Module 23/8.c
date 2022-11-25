#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int n, t = 96;
    scanf("%s%d", &s, &n);
    for (int i = 0; i < strlen(s); i++)
    {
        int ascii_val = (int)s[i];
        int main_n = n;
        if (ascii_val + n > 122)
        {
            n = n - (122 - ascii_val);
            printf("%c", (char)t + n);
        }
        else
        {
            printf("%c", s[i] + n);
        }
    }

    return 0;
}