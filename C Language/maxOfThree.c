#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Numbers(a,b,c): ");
    scanf("%d%d%d", &a, &b, &c);

    // using the conditional statement for printing the details
    if (a >= b && a >= c)
        printf("Max is : %d", a);
    else if (b >= a && b >= c)
        printf("Max is : %d", b);
    else
        printf("Max is : %d", c);

    return 0;
}