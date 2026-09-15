#include <stdio.h>
int main()
{

    int accBalance, withdraw;

    printf("Enter Account Balance: ");
    scanf("%d", &accBalance);

    printf("Enter Withdraw Amount : ");
    scanf("%d", &withdraw);

    if (withdraw > accBalance)
    {
        printf("Can't Withdraw this Amount !!");
    }
    else
    {
        printf("Your Remaining Balance is : %d", accBalance - withdraw);
    }

    return 0;
}