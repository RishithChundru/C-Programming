#include <stdio.h>
long long int factorial(int);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lld", n, factorial(n));
    return 0;
}
long long int factorial(int n)
{
    if (n <=1)
        return 1;
    else
        return n*factorial(n-1);
}
