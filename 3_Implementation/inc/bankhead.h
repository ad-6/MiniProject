#ifndef __BANKHEAD_H__
#define __BANKHEAD_H__

int i,j;
int main_exit;
void menu();
struct date{
    int mnth,day,y;

    };
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



    void menu(void);
    float interest(float t,float a,int r);
    void new_acc();
    void view_all();
    void edit(void);
    void delete_acc(void);
    void view_acc(void);
    void exit_menu(void);


#endif  