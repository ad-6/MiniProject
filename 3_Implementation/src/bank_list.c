#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"
 /**
  * @brief the user can view all the accounts that are there in the system at once
  * 
  */
void view_all()
{
    FILE *view;
    view=fopen("record.dat","r");
    int test=0;
    system("cls");
    printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");

    while(fscanf(view,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.day,&add.dob.mnth,&add.dob.y,&add.age,add.address,&add.phone,add.acc_type,&add.amt,&add.dep.day,&add.dep.mnth,&add.dep.y)!=EOF)
       {
           printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf",add.acc_no,add.name,add.address,add.phone);
           test++;
       }

    fclose(view);
    if (test==0)
        {   system("cls");
            printf("\n No records found\n");}

    view_list_invalid:
     printf("\n\n1. Main Menu \n2. Exit\n Enter your choice:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else if(main_exit==2)
            exit_menu();
        else
        {
            printf("\nInvalid choice.");
            goto view_list_invalid;
        }
}