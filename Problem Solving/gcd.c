/*
Find the greatest commmon divisor(GCD) of two numbers
*/
#include <stdio.h>

int GCD(int m, int n);
int rGCD(int m, int n);

int main()
{
    int a, b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int returnGCD = GCD(a, b);
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d\n", a, b, gcd);
    printf("GCD of %d and %d is %d\n", a, b, returnGCD);

    // recursive GCD calculation
    printf("GCD of %d and %d is %d\n", a, b, rGCD(a, b));
    return 0;
}

int GCD(int m, int n)
{
    while (n)
    {
        int tmp = n;
        n = m % n;
        m = tmp;
    }
    return m;
}

// recursive GCD calculation

int rGCD(int m, int n)
{
    if (n == 0)
    {
        return m;
    }
    else
    {
        return rGCD(n, m % n);
    }
}