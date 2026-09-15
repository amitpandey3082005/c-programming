#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a and b: \n");
    scanf("%d%d", &a, &b);

    // logic to swap values
    int temp = a;
    a = b;
    b = temp;

    printf("a=%d,b=%d", a, b);

    return 0;
}