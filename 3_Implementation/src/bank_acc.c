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

error_t new_acc(acc_info *acc, int* num_acc)
{
    int age,acc_Num,i,flag=0;;
    char name[60];    
    char phone[10];
    char address[60];
    char acc_Type[60];
    printf("%d",*num_acc);
    if(*num_acc<1000)
    {
    	printf("Enter Account Number\n");
        scanf("%d",&acc_Num);
        printf("Enter name\n");
        scanf("%s",&name);
        
        for(i=0;i<*num_acc;i++)
        {
            if(acc[i].acc_no==acc_Num)
            {
                printf("\n Error. Account number is already in use.");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
           
           printf("\n Enter age");
           scanf("%d",&age);           
           printf("\n Enter address (street name, no space)");
           scanf("%s",&address);
           printf("\n Enter phone number");
           scanf("%s",&phone);
           printf("Enter Account Type");
           scanf("%s",&acc_Type);
           acc[*num_acc].acc_no=acc_Num;
           strcpy(acc[*num_acc].name,name);
           strcpy(acc[*num_acc].address, address);
           strcpy(acc[*num_acc].acc_type, acc_Type);
           strcpy(acc[*num_acc].phone,phone); 
           acc[*num_acc].age=age;          
           acc[*num_acc].amt=0.0;
            *num_acc=*num_acc+1;
        }
        return SUCCESS;
    }
    else
    {
        return ERROR_MEMORY_FULL;
    }
}
