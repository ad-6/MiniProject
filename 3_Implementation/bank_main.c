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
    acc_info acc[1000];
    int num_acc = 0;
    char filename[30];
    FILE *fptr;
    printf("\n Enter the name of the file: ");
    gets(filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL)
        printf("\n New file has been created.");
    if (fptr != NULL)
        while (fread(&acc[num_acc], sizeof(acc[num_acc]), 1, fptr) == 1)
            num_acc++;
   menu(acc, &num_acc, filename);
    return 0;
}
