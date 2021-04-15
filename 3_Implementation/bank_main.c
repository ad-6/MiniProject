#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"


/**
 * @brief this is the main menu where the user can choose what they wish to do between:
 * creation, viewing, deleting or updating an account
 * 
 */

void menu(void)
{   int c;
    system("cls");
    printf("\n\n\t\t\tCUSTOMER ACCOUNT BANKING ADMINISTRATION SYSTEM");
    printf("\n\n\n\t\t\tWELCOME TO THE MAIN MENU");
    printf("\n\n\t\t1.Create a new account\n\t\t2.Update information of existing account\n\t\t3.Check the details of existing account\n\t\t4.Removing existing account\n\t\t5.View all accounts \n\t\t6.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&c);

    system("cls");
    switch(c)
    {
        case 1:new_acc();
        break;
        case 2:edit();
        break;
        case 3:view_acc();
        break;
        case 4:delete_acc();
        break;
        case 5:view_all();
        break;
        case 6:exit_menu();
        break;

    }
}


/**
 * @brief this function is used for calling all the other functions required for this system
 * 
 * @return int  null 
 */
int main()
{
    menu();
    return 0;
}
