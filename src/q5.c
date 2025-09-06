// Write a C program that prompts the user for a positive integer and calculates the factorial of that number using a while loop.
#include <stdio.h>
int main()
{
    int fac, i, n;
    printf("enter a postive integer: ");
    scanf("%d", &n);
    i = 1;
    fac = 1;
    while (i <= n)
    {
        fac = fac * i;
        i++;
    }
    printf("Factorial: %d", fac);
}