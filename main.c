#include <stdio.h>

int budget(int income)
{
    // Add variables to store income * n value
    float ten_percent = income * 0.1;
    float twenty_percent = income * 0.2;
    float seventy_percent = income * 0.7;
    printf("Budget Breakdown:\n");

    // Prints floats above to two decimal places (eg. 500.27)
    printf("10%%: %.2f for debts & savings", ten_percent);
    printf("20%%: %.2f for personal wants", twenty_percent);
    printf("70%%: %.2f for your essentials", seventy_percent);
}