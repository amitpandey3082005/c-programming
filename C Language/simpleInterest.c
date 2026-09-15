#include <stdio.h>

int main()
{
    int p, r, t;
    // taking input from the user
    printf("Enter Principle , Rate and Time: ");
    scanf("%d%d%d", &p, &r, &t);

    // printing the simple interest

    printf("Simple Interest(SI) : %d", (p * r * t) / 100);
    return 0;
}