// Write a C program that prompts the user for a positive integer and prints a countdown from that number to 1 using a for loop.
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Countdown:\n");
    for (i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
