#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"

/**
 * @brief this funcitons enables the user to view the account information from the account number or name
 * it also displays the interest in rupees that is been earned by that particular account
 * 
 */

error_t view_acc(acc_info *account, int *numberOfAccounts)
{
    int choice, i, accountNo;
    char name[30];
    int searchflag = 0;
    printf("Do you want to check by\n1.Account no\n2.Name\nEnter your choice:");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter the Account Number:\n");
        scanf("%d", &accountNo);
        for (i = 0; i < *numberOfAccounts; i++)
        {
            if (account[i].account_no == accountNo)
            {
                printf("Given Account No. is registered with following details\n");
                printf("Account No.:%d\tName:%s\tBalance:%f\tAccount Type:%s\n", account[i].account_no, account[i].name, account[i].balance, account[i].account_type);
                searchflag = 1;
                return SUCCESS;
            }
        }
        if (searchflag == 0)
        {
            printf("Error. No record found.\n");
        }
    }
    if (choice == 2)
    {
        printf("Enter the first name: \n");
        scanf("%s", name);
        printf("\nSearch Result.\n\n");
        for (i = 0; i < *numberOfAccounts; i++)
        {
            if (strcmp(account[i].name, name) == 0)
            {
                printf("Given Account No. is registered with following details\n");
                printf("Account No.:%d\tName:%s\tBalance:%f\tAccount Type:%s\n", account[i].account_no, account[i].name, account[i].balance, account[i].account_type);
                searchflag = 1;
                return SUCCESS;
            }
        }
        if (searchflag == 0)
        {
            printf("Error. No record found. \n");
        }
    }
}
