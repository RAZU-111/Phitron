#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
double ratio(int a, int b)
{
    double ratio_of_two_number;
    int p = factorial(a); // calling factorial function
    int q = factorial(b);
    if (p > q)
        ratio_of_two_number = p / q;
    else if (p < q)
        ratio_of_two_number = q / p;
    return ratio_of_two_number;
}
int main()
{
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    int x = factorial(n);
    double y = ratio(a, b);
    printf("Factorial of %d : %d\n", n, x);
    printf("Ratio of %d & %d : %.2lf\n", a, b, y);

    return 0;
}