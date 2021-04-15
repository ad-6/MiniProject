#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"

/**
 * @brief this function removes the account when a valid account number is entered
 * otherwise an error message is displayed
 * 
 */

void delete_acc(void)
{
    FILE *old,*newrec;
    int test=0;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");
    printf("Enter the account number to be deleted:");
    scanf("%d",&del.acc_no);
    while (fscanf(old,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.day,&add.dob.mnth,&add.dob.y,&add.age,add.address,&add.phone,add.acc_type,&add.amt,&add.dep.day,&add.dep.mnth,&add.dep.y)!=EOF)
   {
        if(add.acc_no!=del.acc_no)
            fprintf(newrec,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.day,add.dob.mnth,add.dob.y,add.age,add.address,add.phone,add.acc_type,add.amt,add.dep.day,add.dep.mnth,add.dep.y);

        else
            {test++;
            printf("\nRecord has been deleted successfully.\n");
            }
   }
   fclose(old);
   fclose(newrec);
   remove("record.dat");
   rename("new.dat","record.dat");
   if(test==0)
        {
            printf("\n No record found.");
            erase_invalid:
              printf("\n 1.Try Again \n 2. Main Menu \n 3. Exit \n Enter your choice:");
              scanf("%d",&main_exit);

                 if (main_exit==2)
                    menu();
                else if (main_exit==3)
                    exit_menu();
                else if(main_exit==1)
                    delete_acc();
                else
                    {printf("\nInvalid choice.");
                    goto erase_invalid;}
        }
    else
        {printf("\n1.Main Menu \n2. Exit\n Enter your choice:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            exit_menu();
        }

}
