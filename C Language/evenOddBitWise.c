#include <stdio.h>
int main()
{

    // taking number user input
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Now we will evaluate bitwise And with high value of the number

    if ((n & 1) == 0)
        printf("Even");
    else
        printf("ODD");
    return 0;
}