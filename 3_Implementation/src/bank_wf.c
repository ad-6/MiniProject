#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"

error_t write_file(acc_info *account, int *numberOfAccounts, char *filename)
{
    int i;
	FILE *fptr;
	fptr = fopen(filename,"w");
	if(fptr == NULL)
	{
		printf("No record found.\n");
		exit(1);
	}
	for(i=0;i<*numberOfAccounts;i++)
	{
		fwrite(&account[i],sizeof(account[i]),1,fptr);
		return SUCCESS;
		fclose(fptr);
	}
}