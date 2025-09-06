// Write a C program that prints all even numbers between 1 and 100 using a for loop.
#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n <= 100; n++)
    {
        if (n % 2 == 0)
        {
            printf("%d\n", n);
        }
    }
}