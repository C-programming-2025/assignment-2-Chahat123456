/* Write a C program that prints a pattern of asterisks.
 *****
 ****
 ***
 **
 *
 */
#include <stdio.h>
int main()
{
    int i = 1;
    int j = 1;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}