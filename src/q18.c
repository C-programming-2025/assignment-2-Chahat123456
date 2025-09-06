// Write a C program that prompts the user for a positive integer and prints the
// multiplication table for that number up to 10 using a while loop.
#include <stdio.h>
int main()
{
    int tab, n, i;
    printf("enter a positive number: ");
    scanf("%d", &n);
    i = 1;
    while (i <= 10)
    {
        tab = n * i;
        printf("%d * %d = %d\n", n, i, tab);
        i++;
    };
}