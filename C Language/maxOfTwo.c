#include <stdio.h>
int main()
{

    int n, m;

    // taking input
    printf("Enter numbers: ");
    scanf("%d%d", &n, &m);

    // finding max of 2 using ternary operator
    (n > m) ? printf("Max is %d", n) : printf("Max is: %d", m);

    return 0;
}