#include <stdio.h>
int main()
{

    int entry, exit, total_hour, totalFees;

    // consider time in integer only
    printf("Enter Entry Hour and Exit Hour : ");
    scanf("%d%d", &entry, &exit);

    if (entry < 0 || exit < 0 || exit > 24 || entry > 24 || exit < entry)
    {
        printf("Invalid Output");
    }
    else
    {
        total_hour = exit - entry;
        totalFees = (total_hour - 2) * 20;
        printf("Total Fess is : %d", totalFees);
    }
    return 0;
}