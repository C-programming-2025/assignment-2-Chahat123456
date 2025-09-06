// Write a C program that prompts the user for a positive integer and prints a countdown from that number to 1 using a for loop.
#include <stdio.h>
int main()
{
    int i, n;
    printf("enter a postive integer: ");
    scanf("%d", &n);
    i = 1;
    for (i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
}