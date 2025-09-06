// Write a C program that prompts the user for a positive integer and prints the
// multiplication table for that number up to 10 using a while loop.
#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}
