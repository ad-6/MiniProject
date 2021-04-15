#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"

/**
 * @brief this function enables the user to edit the address or phone number of the exiting account
 * this can be only done by account id otherwise an error message is displayed
 * 
 */

void edit(void)
{
    int opt,test=0;
    FILE *old,*newrec;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");

    printf("\nEnter the account number to be edited:");
    scanf("%d",&upd.acc_no);
    while(fscanf(old,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.day,&add.dob.mnth,&add.dob.y,&add.age,add.address,&add.phone,add.acc_type,&add.amt,&add.dep.day,&add.dep.mnth,&add.dep.y)!=EOF)
    {
        if (add.acc_no==upd.acc_no)
        {   test=1;
            printf("\n\n1.Address\n2.Phone\n\n Enter the information to be changed:");
            scanf("%d",&opt);
            system("cls");
            if(opt==1)
                {printf("Enter the new address:");
                scanf("%s",upd.address);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.day,add.dob.mnth,add.dob.y,add.age,upd.address,add.phone,add.acc_type,add.amt,add.dep.day,add.dep.mnth,add.dep.y);
                system("cls");
                printf("Changes have been saved.");
                }
            else if(opt==2)
                {
                    printf("Enter the new phone number:");
                scanf("%lf",&upd.phone);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.day,add.dob.mnth,add.dob.y,add.age,add.address,upd.phone,add.acc_type,add.amt,add.dep.day,add.dep.mnth,add.dep.y);
                system("cls");
                printf("Changes have been saved.");
                }

        }
        else
            fprintf(newrec,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.day,add.dob.mnth,add.dob.y,add.age,add.address,add.phone,add.acc_type,add.amt,add.dep.day,add.dep.mnth,add.dep.y);
    }
    fclose(old);
    fclose(newrec);
    remove("record.dat");
    rename("new.dat","record.dat");

if(test!=1)
        {   system("cls");
            printf("\nError. No record found.");
            edit_invalid:
              printf("\n1. Try Again\n2. Main Menu \n3. Exit \n Enter your choice:");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==2)

                    menu();
                else if (main_exit==3)
                    exit_menu();
                else if(main_exit==1)
                    edit();
                else
                    {printf("\nInvalid choice");
                    goto edit_invalid;}
        }
    else
        {printf("\n 1. Main Menu \n2. Exit \n Enter your choice:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            exit_menu();
        }
}

