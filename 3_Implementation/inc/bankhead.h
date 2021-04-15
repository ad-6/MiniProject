#ifndef __BANKHEAD_H__
#define __BANKHEAD_H__

int i,j;
int main_exit;
void menu();

/**
 * @brief the structure date holds all the date that would be required like date of creation of account and date of birth of account holder
 * 
 */

struct date{
    int mnth,day,y;

    };

/**
 * @brief this structure holds all the vital components which are neccesary for the account creation/viewing/editing etc
 * 
 */

struct {

    char name[60];
    int acc_no,age;
    char address[60];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date dep;
    
    }add,upd,chk,del;

/**
 * @brief here all the functions that are being used in this program
 * 
 */

    void menu(void);
    float interest(float t,float a,int r);
    void new_acc();
    void view_all();
    void edit(void);
    void delete_acc(void);
    void view_acc(void);
    void exit_menu(void);


#endif  