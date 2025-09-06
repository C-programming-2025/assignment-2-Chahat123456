// Write a C program that prompts the user for a positive integer and checks if it is a prime number using a while loop.
int main()
{
    int n, a = 0;
    printf("Rnter any number\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            a++;
        }
    }
    if (a == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}