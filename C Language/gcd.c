#include <stdio.h>
int main()
{
    int a, b;
    // taking the numbers from the user
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);

    int a1 = a, b1 = b;

    // calculating the gcd of two number using the while loop

    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    // printing the GCD of a and b
    printf("GCD(%d,%d) is : %d", a1, b1, a);

    // printing hcf of the number

    printf("LCM(%d%d) : %d", a1, b1, (a1 * b1) / a);

    return 0;
}