#include <stdio.h>
int shat_present(n);
int digit_sum(n);
int last_digit_prime(n);

int main()
{
    int n;
    scanf("%d", &n);
    if (shat_present(n) == 1 && digit_sum(n) > 10 && last_digit_prime(n) == 1)
        printf("Number was Lucky");
    else
        printf("Soory!Number was not Lacky");
}
int shat_present(n)
{
    while (n>0)
    {
        if(n%10==7)
        return 1;
        n /= 10;
    }
    return 0;
    
}
int digit_sum(n)
{
    int sum=0;
    while (n>0)
    {
        sum += n;
        n /= 10; 
    }
    return sum;
    
}
int last_digit_prime(n)
{
    int Last_digit=n%10;
    if(Last_digit==2||Last_digit==3||Last_digit==5||Last_digit==7)
    return 1;
    else
     return 0;
}
