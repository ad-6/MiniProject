#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"
/**
 * @brief this function creates new account
 * takes input : first name,address, age, account number, amount to be deposited
 * the account number needs to be unique otherwise an error message is prompted
 * 
 */

error_t new_acc(acc_info *account, int* numberOfAccounts)
{
    char name[60];
    int age,accNum,i,flag=0;;
    char phone[12];
    char address[20];
    char accType[60];
    printf("%d",*numberOfAccounts);
    if(*numberOfAccounts<1000)
    {
    	printf("Enter Account Number\n");
        scanf("%d",&accNum);
        printf("Enter name\n");
        scanf("%s",&name);
        
        for(i=0;i<*numberOfAccounts;i++)
        {
            if(account[i].account_no==accNum)
            {
                printf("\n Error. Account number is already in use.");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
           account[*numberOfAccounts].account_no=accNum;
           strcpy(account[*numberOfAccounts].name,name);
           printf("Enter age\n");
           scanf("%d",&age);
           printf("Enter phone number\n");
           scanf("%s",&phone);
           printf("Enter address (street name, no space)\n");
           scanf("%s",&address);
           printf("Enter Account Type\n");
           scanf("%s",&accType);
           strcpy(account[*numberOfAccounts].address, address);
           strcpy(account[*numberOfAccounts].account_type, accType);
		   account[*numberOfAccounts].age=age;
		   strcpy(account[*numberOfAccounts].phone,phone);            
		   account[*numberOfAccounts].balance=0.0;
            *numberOfAccounts=*numberOfAccounts+1;
        }
        return SUCCESS;
    }
    else
    {
        return ERROR_MEMORY_FULL;
    }
}
