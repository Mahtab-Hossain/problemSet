#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>


using namespace std;

class Admin{
public:
    int id,age;
    string name;
    string userName[20];
    string passWord[50];
public:
    void add_employe(int x){

    }
    void updateData(){

    }

};
class Employee{
public:
    char emp_name[10];
    string emp_cerdenials;
public:
    void add_usr(){
        // return string;
    }
    void update_emp_data(){

    }

};
class User{
public:
    string usr_name,usr_address;
    long int usr_acc_no;
public:
    void withdraw_amount(){

    }
    void show_acc_dtl(){

    }

};
class Transaction{
public:
    int id;
    string details,date;
public:
    void update_transction(){

    }
    void debit_info(string info){

    }
    void procese_debit(){

    }
    void credit(string coll){

    }
    void credit_add(){

    }
    void credit_update(){

    }

};

class Bank_acc
{
    private:
    int deposit,acc_no;
    char type,name[100];
    public:

    void report() const;
    void create_acc();
    void depo(int);
    void Display_acc() const;
    void Update();
    void draw(int);
    int return_deposit() const;
    int return_accNo() const;
    char return_type() const;


};


int main(){
    Admin adminClassObj;
    Employee empClassObj;
    Transaction trsClassObj;
    User usrClassObj;


    return 0;
}