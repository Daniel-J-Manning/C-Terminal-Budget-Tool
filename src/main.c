#include <stdio.h>

int budget(int income)
{
    // Add variables to store income * n value
    float ten_percent = income * 0.1;
    float twenty_percent = income * 0.2;
    float seventy_percent = income * 0.7;
    printf("Budget Breakdown:\n");

    // Prints floats above to two decimal places (eg. 500.27)
    printf("10%%: %.2f for debts & savings\n", ten_percent);
    printf("20%%: %.2f for personal wants\n", twenty_percent);
    printf("70%%: %.2f for your essentials\n", seventy_percent);
}

int main()
{
    int income; // Income variable
    printf("Enter your income: ");  // Ask user for their income
    scanf("%d", &income);   // Allows user to type income

    if (income < 0)
    {
        printf("Invalid Income. Can't be less than 0.\n");
        return 1;
    }
    else 
    {
        printf("Your income is: %d\n\n", income);   // Prints income to CLI
        budget(income); // Calls the budget function
    }
    return 0;
}