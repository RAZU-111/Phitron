#include <stdio.h>
int add_three_nums(int a, int b, int c=0)
{
    return a + b + c;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int res = add_three_nums(x, y);
    printf("%d", res);
}