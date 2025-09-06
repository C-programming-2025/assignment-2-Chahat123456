/* Write a C program that prints a pattern of asterisks.
 *
 **
 ***
 ****
 *****
 */
#include <stdio.h>
int main()
{
    int i, j;
    i = 1;
    j = 1;

    for (i = 1; i < 7; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("*");
    return 0;
}