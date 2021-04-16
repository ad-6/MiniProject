#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bankhead.h"

error_t write_into_file(acc_info *acc, int *num_acc, char *filename)
{
    int i;
	FILE *fptr;
	fptr = fopen(filename,"w");
	if(fptr == NULL)
	{
		printf("\n No record found.");
		exit(1);
	}
	for(i=0;i<*num_acc;i++)
	{
		fwrite(&acc[i],sizeof(acc[i]),1,fptr);
		return SUCCESS;
		fclose(fptr);
	}
}
