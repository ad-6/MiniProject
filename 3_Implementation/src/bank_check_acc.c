#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"

/**
 * @brief this function enables the user to view the account information from the account number or name
 * displays the account number, name, amount in the account and account type
 * 
 */

error_t view_acc(acc_info *acc, int *num_acc)
{
    int choice, i, acc_choice,flag=0;
    char name[60];
    printf("Do you want to check by\n1.Account number \n2.Name\nEnter your choice:");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter the Account Number:\n");
        scanf("%d", &acc_choice);
        for (i = 0; i < *num_acc; i++)
        {
            if (acc[i].acc_no == acc_choice)
            {
                printf("\n The details are as follows");
                printf("\n\tAccount No.:%d\n\tName:%s\n\tAmount:%f\n\tAccount Type:%s", acc[i].acc_no, acc[i].name, acc[i].amt, acc[i].acc_type);
                flag = 1;
                return SUCCESS;
            }
        }
        if (flag == 0)
           printf("\n Error. No record found.");
        
    }
    if (choice == 2)
    {
        printf("Enter the first name: \n");
        scanf("%s", name);
        for (i = 0; i < *num_acc; i++)
        {
            if (strcmp(acc[i].name, name) == 0)
            {
                printf("\n The details are as follows");
                printf("\n\tAccount No.:%d\n\tName:%s\n\tAmount:%f\n\tAccount Type:%s", acc[i].acc_no, acc[i].name, acc[i].amt, acc[i].acc_type);
                flag = 1;
                return SUCCESS;
            }
        }
        if (flag == 0)        
            printf("\n Error. No record found.");
        
    }
}
