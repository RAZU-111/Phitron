#include <stdio.h>
void Even_print(int a)
{
    for (int i = 2; i <= a; i += 2)
    {
        printf("%d ", i);
    }
}
void odd_print(int a)
{
    for (int i = 2; i < a; i += 2)
    {
        printf("%d ", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        Even_print(n);
    else
        odd_print(n);

    return 0;
}