#include <stdio.h>
char grad(int n)
{
    if (n >= 80 && n <= 100)
        // printf("A");
        return 'A';
    if (n >= 60 && n < 80)
        // printf("B");
        return 'B';
    if (n >= 40 && n < 60)
        // printf("C");
        return 'C';
    if (n >= 0 && n < 40)
        // printf("F");
        return 'F';
}
int main()
{
    int mark;
    scanf("%d", &mark);
    char c = grad(mark);
    printf("%c", c);
}