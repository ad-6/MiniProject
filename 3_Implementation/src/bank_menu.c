#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"

/**
 * @brief this is the main menu where the user can choose what they wish to do between:
 * creation, viewing an account
 * 
 */

void menu(acc_info *acc, int *num_acc, char *filename)
{
    int choice=0;
    system("cls");
    printf("\n\n\t\t\tCUSTOMER ACCOUNT BANKING ADMINISTRATION SYSTEM");
    printf("\n\n\n\t\t\tWELCOME TO THE MAIN MENU");
    while(1)
    {
        printf("\n\n\t\t1.Create a new account\n\t\t2.Check the details of existing account\n\t\t3.Exit\n\n\n\n\n\t\t Enter your choice:");
        scanf("%d",&choice);
        if(choice == 1)
            new_acc(acc,num_acc);
        
        if(choice == 2)        
            view_acc(acc,num_acc);
        
        if(choice == 3)
        {
            write_into_file(acc,num_acc,filename);
            printf("\n Thank you. You have exited successfully.");
            break;
        }
     }
    return 0;
}
