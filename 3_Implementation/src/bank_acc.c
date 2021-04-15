#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"
/**
 * @brief this function creates new account
 * takes input : date of creation, first name,date of birth, address, age, account number, amount to be deposited
 * the account number needs to be unique otherwise an error message is prompted
 * 
 */
void new_acc()

{
    int choice;
    FILE *ptr;

    ptr=fopen("record.dat","a+");
    account_no:
    system("cls");
    printf("\t\t\t ADD RECORD ");
    printf("\nEnter today's date(dd/mm/yyyy):");
    scanf("%d/%d/%d",&add.dep.day,&add.dep.mnth,&add.dep.y);
    printf("\nEnter the account number:");
    scanf("%d",&chk.acc_no);
    while(fscanf(ptr,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.name,&add.dob.day,&add.dob.mnth,&add.dob.y,&add.age,add.address,&add.phone,add.acc_type,&add.amt,&add.dep.day,&add.dep.mnth,&add.dep.y)!=EOF)
    {
        if (chk.acc_no==add.acc_no)
            {printf("Error. Account number is already in use.");
            
                goto account_no;

            }
    }
    add.acc_no=chk.acc_no;
        printf("\nEnter the first name:");
    scanf("%s",add.name);
    printf("\nEnter the date of birth(dd/mm/yyyy):");
    scanf("%d/%d/%d",&add.dob.day,&add.dob.mnth,&add.dob.y);
    printf("\nEnter the age:");
    scanf("%d",&add.age);
    printf("\nEnter the address (street name, no space):");
    scanf("%s",add.address);
    printf("\nEnter the phone number: ");
    scanf("%lf",&add.phone);
    printf("\nEnter the amount to be deposited:");
    scanf("%f",&add.amt);
    printf("\nType of account available:\n\tSaving\n\tCurrent\n\tFixed1(for 1.y)\n\tFixed2(for 2 years)\n\tFixed3(for 3 years)\n\n\tEnter your choice (type in lowercase):");
    scanf("%s",add.acc_type);

        fprintf(ptr,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.day,add.dob.mnth,add.dob.y,add.age,add.address,add.phone,add.acc_type,add.amt,add.dep.day,add.dep.mnth,add.dep.y);


    fclose(ptr);
    printf("\nAccount has been created successfully");
    add_invalid:
    printf("\n 1. Main Menu \n 2. Exit \n Enter your choice: ");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else if(main_exit==2)
            exit_menu();
    else
        {
            printf("\nInvalid choice.");
            goto add_invalid;
        }
}