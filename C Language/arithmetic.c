#include <stdio.h>
int main()
{
    int n1, n2;
    char b;

    printf("Enter Operator : ");
    scanf("%c", &b);

    printf("Enter Operand : ");
    scanf("%d%d", &n1, &n2);

    switch (b)
    {
    case '+':
        printf("Add is : %d ", n1 + n2);
        break;
    case '-':
        printf("Sub is : %d ", n1 - n2);
        break;
    case '*':
        printf("Mul is %d ", n1 * n2);
        break;
    case '/':

        if (n2 != 0)
        {
            printf("Div is : %d ", n1 / n2);
        }
        else
        {
            printf("Error! Division by zero is not allowed.");
        }
        break;
    default:
        printf("Invalid Operator!");
    }
    return 0;
}
