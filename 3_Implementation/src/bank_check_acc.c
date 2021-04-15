#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"

/**
 * @brief this funcitons enables the user to view the account information from the account number or name
 * it also displays the interest in rupees that is been earned by that particular account
 * 
 */
void view_acc(void)
{
    FILE *ptr;
    int test=0,rate;
    int op;
    float time;
    float intrst;
    ptr=fopen("record.dat","r");
    printf("Do you want to check by\n1.Account no\n2.Name\nEnter your choice:");
    scanf("%d",&op);
    if (op==1)
    {   printf("Enter the account number:");
        scanf("%d",&chk.acc_no);

        while (fscanf(ptr,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.day,&add.dob.mnth,&add.dob.y,&add.age,add.address,&add.phone,add.acc_type,&add.amt,&add.dep.day,&add.dep.mnth,&add.dep.y)!=EOF)
        {
            if(add.acc_no==chk.acc_no)
            {   system("cls");
                test=1;

                printf("\nAccount NO.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited: %.2f \nDate Of Deposit:%d/%d/%d\n\n",add.acc_no,add.name,add.dob.day,add.dob.mnth,add.dob.y,add.age,add.address,add.phone,
                add.acc_type,add.amt,add.dep.day,add.dep.mnth,add.dep.y);
                if(strcmpi(add.acc_type,"fixed1")==0)
                    {
                        time=1.0;
                        rate=9;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n %.2f rupees will be received as interest on %d/%d/%d",intrst,add.dep.day,add.dep.mnth,add.dep.y+1);
                    }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n %.2f rupees will be received as interest on %d/%d/%d",intrst,add.dep.day,add.dep.mnth,add.dep.y+2);

                    }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n %.2f rupees will be received as interest on %d/%d/%d",intrst,add.dep.day,add.dep.mnth,add.dep.y+3);

                    }
                 else if(strcmpi(add.acc_type,"saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n%.2f rupees will be received as interest on %d of every mnth",intrst,add.dep.day);

                     }
                 else if(strcmpi(add.acc_type,"current")==0)
                    {

                        printf("\n\nNo interest will be received");

                     }

            }
        }
    }
    else if (op==2)
    {   printf("Enter the name:");
        scanf("%s",&chk.name);
        while (fscanf(ptr,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.day,&add.dob.mnth,&add.dob.y,&add.age,add.address,&add.phone,add.acc_type,&add.amt,&add.dep.day,&add.dep.mnth,&add.dep.y)!=EOF)
        {
            if(strcmpi(add.name,chk.name)==0)
            {   system("cls");
                test=1;
                printf("\nAccount No.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:%.2f \nDate Of Deposit:%d/%d/%d\n\n",add.acc_no,add.name,add.dob.day,add.dob.mnth,add.dob.y,add.age,add.address,add.phone,
                add.acc_type,add.amt,add.dep.day,add.dep.mnth,add.dep.y);
                if(strcmpi(add.acc_type,"fixed1")==0)
                    {
                        time=1.0;
                        rate=9;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n%.2f rupees will be received as interest on %d/%d/%d",intrst,add.dep.day,add.dep.mnth,add.dep.y+1);
                    }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n%.2f rupees will be received as interest on %d/%d/%d",intrst,add.dep.day,add.dep.mnth,add.dep.y+2);

                    }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n%.2f rupees will be received as interest on %d/%d/%d",intrst,add.dep.day,add.dep.mnth,add.dep.y+3);

                    }
                 else if(strcmpi(add.acc_type,"saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n%.2f rupees will be received as interest on %d of every mnth",intrst,add.dep.day);

                     }
                 else if(strcmpi(add.acc_type,"current")==0)
                    {

                        printf("\n\n No interest will be received.");

                     }

            }
        }
    }


    fclose(ptr);
     if(test!=1)
        {   system("cls");
            printf("\n Error. No record found");
            see_invalid:
              printf("\n1. Try Again\n2. Main Menu\n3. Exit\n Enter your choice:");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==2)
                    menu();
                else if (main_exit==3)
                    exit_menu();
                else if(main_exit==1)
                    view_acc();
                else
                    {
                        system("cls");
                        printf("\nInvalid choice");
                        goto see_invalid;}
        }
    else
        {printf("\n1. Main Menu\n2. Exit\n Enter your choice:");
        scanf("%d",&main_exit);}
        if (main_exit==1)
        {
            system("cls");
            menu();
        }

        else
           {

             system("cls");
            exit_menu();
            }

}