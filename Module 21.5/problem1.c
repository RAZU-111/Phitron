#include <stdio.h>
void print(int x);
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
}
void print(int x)
{
    if (x > 0)
    {
        for (int i = x; i >= -x; i--)
            printf("%d ", i);
        
    }
    else
    {
        for (int i = x; i <= -x; i++)
            printf("%d ", i);
    }
}