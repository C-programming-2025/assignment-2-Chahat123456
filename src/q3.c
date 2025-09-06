// Write a C program that calculates the absolute value of a given number without using the built-in absolute value function.
#include <stdio.h>
int main()
{
    int n, ab_val;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        ab_val = n;
    }
    else if (n < 0)
    {
        ab_val = -n;
    }
    printf("the absolute value is: %d", ab_val);
    return 0;
}