#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;

    printf("Enter Your Marks :");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    int avg = (m1 + m2 + m3 + m4 + m5) / 5;

    if (avg > 40)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}