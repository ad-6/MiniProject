#ifndef __BANKHEAD_H__
#define __BANKHEAD_H__

int i,j;
int main_exit;

/**
 * @brief this structure holds all the vital components which are neccesary for the account creation/viewing  etc
 * 
 */

typedef struct acc_info
{
    char name[60];
    int acc_no,age,phone;
    char address[60];
    char acc_type[10];
    float amt;
}acc_info;

/**
 * @brief this is a for error 
 * 
 */

typedef enum error_t
{
    ERROR_NULL_PTR = 0,    
    SUCCESS = 1,            
    ERROR_MEMORY_FULL = -1   
}error_t;

/**
 * @brief here all the functions that are being used in this program
 * 
 */

void menu(acc_info *acc, int *num_acc, char *filename);
error_t new_acc(acc_info *acc, int* num_acc);
error_t view_acc(acc_info *acc, int *num_acc);
error_t write_into_func(acc_info *acc, int *num_acc, char *filename);


#endif  
