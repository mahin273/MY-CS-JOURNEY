#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CUSTOMERS 100
typedef struct
{
    int id;
    char name[50];
    char birthday[11];
    char house[20];
    int purchases[3];
} Customer;
int substringChecker(char *mainString, char *searchString)
{
    int mainStringLength = strlen(mainString);
    int searchStringLength = strlen(searchString);
    // Iterate through main string and search for substring
    for (int i = 0; i <= mainStringLength - searchStringLength; i++)
    {
        int j;
        // Check if all the characters in the substring match
        for (j = 0; j < searchStringLength; j++)
        {
            if (mainString[i + j] != searchString[j])
            {
                break;
            }
        }
        if (j == searchStringLength)
        {
            // Substring found, return the index of the first character
            return i;
        }
    }
    // Substring not found
    return -1;
}
int main()
{
    Customer customers[MAX_CUSTOMERS];
    int numCustomers;
    printf("Enter the number of customers: ");
    scanf("%d", &numCustomers);
    // Read customer data
    for (int i = 0; i < numCustomers; i++)
    {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Customer ID: ");
        scanf("%d", &customers[i].id);
        printf("Name: ");
        scanf(" %[^\n]s", customers[i].name);
        printf("Birthday (dd/mm/yyyy): ");
        scanf(" %s", customers[i].birthday);
        printf("House (Gryffindor, Slytherin): ");
        scanf(" %s", customers[i].house);
        printf("Purchase Cost of Last 3 Months: ");
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &customers[i].purchases[j]);
        }
    }
    // Find top 3 loyal customers from each house
    printf("\nTop 3 loyal customers from each house:\n");
    for (int h = 0; h < 2; h++)
    { // Loop through Gryffindor and Slytherin houses
        printf("%s:\n", (h == 0) ? "Gryffindor" : "Slytherin");
        int numMatches = 0;
        // Initialize top 3 matches for current house
        int matchIDs[3] = {-1, -1, -1};
        float matchAverages[3] = {0, 0, 0};
        // Loop through all customers and find top 3 matches for current house
        for (int i = 0; i < numCustomers; i++)
        {
            // Check if customer belongs to current house and satisfies name criteria
            if (strcmp(customers[i].house, (h == 0) ? "Gryffindor" : "Slytherin") == 0 &&
                substringChecker(customers[i].name, (h == 0) ? "est" : "rus") != -1)
            {
                // Calculate average purchase value for customer
                float sum = 0;
                for (int j = 0; j < 3; j++)
                {
                    sum += customers[i].purchases[j];
                }
                float avg = sum / 3.0;
                // Check if customer is a match and should be added to top 3
                if (numMatches < 3)
                {
                    matchIDs[numMatches] = i;
                    matchAverages[numMatches] = avg;
                    numMatches++;
                }
                else
                {
                    // Check if current customer has a higher average than any of the top 3 matches
                    for (int j = 0; j < 3; j++)
                    {
                        if (avg > matchAverages[j])
                        {
                            matchIDs[j] = i;
                            matchAverages[j] = avg;
                            break;
                        }
                    }
                }
            }
        }
        if (numMatches == 0)
        {
            printf("Nil\n");
        }
        else
        {
            // Print details for top 3 matches for current house
            for (int i = 0; i < 3 && i < numMatches; i++)
            {
                printf("%s - %s - %.2f\n", customers[matchIDs[i]].name, customers[matchIDs[i]].birthday, matchAverages[i]);
            }
        }
    }
    return 0;
}
