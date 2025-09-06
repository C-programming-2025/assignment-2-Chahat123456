// Write a C program that prompts the user for a number and prints its multiplication table up to 10 using a do-while loop.
#include <stdio.h>
int main()
{
    int tab, n, i;
    printf("enter a number: ");
    scanf("%d", &n);
    i = 1;
    do
    {
        tab = n * i;
        printf("%d * %d = %d\n", n, i, tab);
        i++;
    } while (i <= 10);
}