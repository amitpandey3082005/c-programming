#include <stdio.h>
int main()
{

    int n;
    // taking number as a input
    printf("Enter the number : ");
    scanf("%d", &n);

    // writing logic to reverse the number
    int rev = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n /= 10;
    }

    printf("Reverse Number is : %d", rev);

    return 0;
}