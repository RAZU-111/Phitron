#include <stdio.h>
int calculation(char oparator, int x, int y)
{
    switch (oparator)
    {
    case '+':

        return x + y;
        break;
    case '-':

        return x - y;
        break;
    case '*':

        return x * y;
        break;
    case '/':

        return x / y;
        break;

    default:
        return 0;
    }
}
int main()
{
    char c;
    int a, b;
    scanf("%c", &c);
    scanf("%d%d", &a, &b);
    int result = calculation(c, a, b);
    printf("%d", result);
}