#include <stdio.h>

int main()
{
    int a;
    printf("Enter number a: ");
    scanf("%d", &a);

    // logic to check number een or odd using conditionla statement
    if (a % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");

    // using ternary operator

    (a % 2 == 0) ? printf("Even") : printf("Odd");

    return 0;
}