// Write a C program that calculates the sum of all even numbers from 1 to 50 using a while loop.
#include <stdio.h>
int main()
{
    int n, sum;
    sum = 0;
    for (n = 1; n <= 50; n++)
    {
        if (n % 2 == 0)
        {
            sum = sum + n;
        }
    }
    printf("sum = %d", sum);
}