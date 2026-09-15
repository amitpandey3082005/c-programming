#include <stdio.h>
int main()
{
    int n; // declare the variable
    // taking number as a input from user
    printf("Enter n: ");
    scanf("%d", &n);

    // writing logic to check prime or not

    if (n <= 1)
    {
        printf("Not Prime");
    }
    else if (n == 2 || n == 3)
    {
        printf("Prime");
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        printf("Not Prime");
    }
    else
    {
        int isPrime = 1; // consider number as a prime

        for (int i = 5; i * i <= n; i += 6)
        {

            if (n % i == 0 || n % (i + 2) == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("Prime");
        }
        else
        {
            printf("Not Prime");
        }
    }

    return 0;
}
