#include <stdio.h>
int main()
{
    int n;
    // taking n as user input
    printf("Enter n: ");
    scanf("%d", &n);

    // writing logic to print fibonacci series
    int a = 0, b = 1;
    printf("%d", a);

    if (n > 1)
    {
        printf("%d", b);
        for (int i = 3; i <= n; i++)
        {
            int c = a + b;
            printf("%d", c);
            a = b;
            b = c;
        }
    }

    return 0;
}