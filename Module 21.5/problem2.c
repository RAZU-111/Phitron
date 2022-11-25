#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    star_print(n);
}
void star_print(int rows)
{

    int i, j, space;
    for (i = rows; i >= 1; i--)
    {
        for (space = 0; space < rows - i; space++)
            printf("  ");
        for (j = i; j <= 2 * i - 1; j++)
            printf("*");
        for (j = 0; j < i - 1; j++)
            printf("*");
        printf("\n");
    }
}
