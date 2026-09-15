#include <stdio.h>

int main()
{
    // Declaring variable
    int a, b;
    // taking input from user
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);

    // printing result
    printf("Add: %d\n", a + b);
    printf("Sub: %d\n", a - b);
    printf("Mul: %d\n", a * b);
    printf("Div: %d", a / b);

    return 0;
}