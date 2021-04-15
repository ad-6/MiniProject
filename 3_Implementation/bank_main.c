#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"



/**
 * @brief this function is used defining parameters and for calling all the other functions required for this system
 * 
 * @return int  null 
 */
int main()
{
    acc_info account[1000];
    int numberOfAccounts = 0;
    char filename[30];
    FILE *fptr;
    printf("Enter the name of the file: ");
    gets(filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("New file has been created.\n");
    }
    if (fptr != NULL)
    {
        while (fread(&account[numberOfAccounts], sizeof(account[numberOfAccounts]), 1, fptr) == 1)
        {
            numberOfAccounts++;
        }
    }
   menu(account, &numberOfAccounts, filename);
    return 0;
}
