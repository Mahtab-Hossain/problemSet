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
    //report function
    void report() const;
    //account createion function
    void create_acc();
    //money deposit function
    void depo(int);
    //account info display function
    void Display_acc() const;
    //account information function
    void Update();
    //money withdrawal function
    void withDraw(int);
    //deposit return function
    int return_deposit() const;
    int return_accNo() const;
    char return_type() const;


};

void Bank_acc::Update(){
    cout<<"\tBank Account NO: "<<acc_no;
    cout<<"\n\tUpadate Account Holder Name: ";
    cin.getline(name,50);
    cout<<"\n\tUpdate Account Type: ";
    cin>>type;
    type=toupper(type);
    cout<<"\n\tUpdate Total Balance: ";
    cin>>deposit;

};

void Bank_acc::create_acc(){
    system("CLS");
    cout<<"\n\tEnter Account Number: ";
    cin>>acc_no;
    cout<<"\n\tEnter account holder name: ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"\n\tEnter the type of account: ";
    cin>>type;
    type=toupper(type);
    cout<<"\n\tEnter total ammount: ";
    cin>>deposit;
    
    cout<<"\n\tAccount Created Successfully!!";

};

void Bank_acc::Display_acc() const{
    cout<<"\tAccount NO: "<<acc_no;
    cout<<"\n\tAccount Owner's Name: "<<name;
    cout<<"\n\tAccount Type: "<<type;
    cout<<"\n\tTotal ammount in the account: "<<deposit;

};

int Bank_acc::return_accNo() const{
    return acc_no;
};

char Bank_acc::return_type() const{
    return type;
};

void Bank_acc::report() const
{
    cout<<acc_no<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(10)<<deposit<<endl;

}

void Bank_acc::depo(int a)
{
    deposit = deposit + a;
}
void Bank_acc::withDraw(int a){
    deposit = deposit + a;
};

int Bank_acc::return_deposit() const
{
    return deposit;
};


void create_bank_acc(){
    Bank_acc acc;
    ofstream outfile;

    outfile.open("Bank_acc.dat",ios::binary|ios::app);
    acc.create_acc();
    outfile.write(reinterpret_cast<char *>(&acc),sizeof(Bank_acc));
    outfile.close();
}

void display_all(){
    system("CLS");
    Bank_acc acc;
    ifstream infile;
    infile.open("Bank_Acc.dat",ios::binary);
    if(!infile){
        cout<<"File not found...press any key";
        return;
    }
    cout<<"\n\tBank account holders name..\n\n";
    cout<<"---------------------\n";
    cout<<"Account No,\tName,\tBalance Type\n";
    cout<<"---------------------\n";
    while(infile.read(reinterpret_cast<char*> (&acc),sizeof(Bank_acc)))
    {
        acc.report();
    }
    infile.close();
    
}

void display_slip(int n){
    Bank_acc acc;
    bool flag = false;
    ifstream infile;
    infile.open("Bank_acc.dat",ios::binary);
    if(!infile){
        cout<<"file could't be opend";
        return;
    }
    cout<<"\n\tBalance info....";
    while(infile.read(reinterpret_cast<char *> (&acc),sizeof(Bank_acc)))
    {
        if(acc.return_accNo() == n){
            acc.Display_acc();
            flag = true;
        }
    }
    infile.close();
    if(flag ==false){
        cout<<"\n\n\tBank account number does not exist";
    }
}

void rm_bank_acc(int n){
    Bank_acc acc;
    ifstream infile;
    ofstream outfile;
    infile.open("Bank_acc.dat",ios::binary);
    if(!infile){
        cout<<"File couldn't be open...press any key";
        return;
    }
    outfile.open("Temp.dat",ios::binary);
    infile.seekg(0,ios::beg);
    while(infile.read(reinterpret_cast<char *>(&acc),sizeof(Bank_acc)))
    {
        if(acc.return_accNo() != n){
            outfile.write(reinterpret_cast<char *>(&acc),sizeof(Bank_acc));
        }
    }
    infile.close();
    outfile.close();

    remove("Bank_acc.dat");
    rename("Temp.dat","Bank_acc.dat");
    cout<<"\n\nRecord Removed";
}

void money_depo_withdraw(int n, int option){
    int amount;
    bool found = false;
    Bank_acc acc;
    fstream file;
    file.open("Bank_Acc.dat",ios::binary|ios::in|ios::out);
    if(!file){
        cout<<"file not found";
        return;
    }
    while (!file.eof()&& found==false)
    {
        file.read(reinterpret_cast<char *> (&acc),sizeof(Bank_acc));
        if(acc.return_accNo()==n){
            acc.Display_acc();
            if(option==1){
                cout<<"\n\tMoney dioposits and total amount";
                cout<<"\n\n\tenter amount to deposit";
                cin>>amount;
                acc.depo(amount);
            }
            if(option==2){
                cout<<"\n\n\tWithdraw all money";
                cout<<"\n\n\tenter amount to withdraw: ";
                cin>>amount;
                int bal=acc.return_deposit()-amount;
                if(bal<0){
                    cout<<"you are broke";
                }
                else{
                    acc.withDraw(amount);
                }
                int pos;
                pos=(-1)*static_cast<int>(sizeof(acc));
                file.seekp(pos,ios::cur);
                file.write(reinterpret_cast<char*>(&acc),sizeof(Bank_acc));
                cout<<"\n\n\tRecord updated";
                found=true;
            }

        }
        file.close();
        if(found==false){
            cout<<"\n\n\tRecord not found";
        }
    }
    
}
void update_bank_acc(int n){
    bool found = false;
    Bank_acc acc;
    fstream file;
    file.open("Bank_Acc.dat",ios::binary|ios::in|ios::out);
    if(!file)
    {
        cout<<"File not found...press any key...";
        return;
    }
    while(!file.eof()&&found==false){
        file.read(reinterpret_cast<char *>(&acc),sizeof(Bank_acc));
        if(acc.return_accNo()==n)
        {
            acc.Display_acc();
            cout<<"\n\n\tenter the new details of the bnak accout"<<endl;
            acc.Update();
            int pos;
            pos=(-1)*static_cast<int>(sizeof(Bank_acc));
            file.seekp(pos,ios::cur);
            file.write(reinterpret_cast<char *>(&acc),sizeof(Bank_acc));
            cout<<"\n\n\tRecord Updated";
            found = true;
        }
        file.close();
        if(found==false){
            cout<<"\n\n\trecord not found";
        }
    }
}



int main(){
    //Admin adminClassObj;
    //Employee empClassObj;
    //Transaction trsClassObj;
    //User usrClassObj;
    char ch;
    int number;
    //loop start
    do{
    system("CLS");
    cout<<"\n\t\t............";
    cout<<"\t\tBank management System";
    cout<<"\n\t\t............";
    cout<<"\t\t\tMain Menu \n";
    cout<<"\n\t\t1. Create new account";
	cout<<"\n\t\t2. Amount";
	cout<<"\n\t\t3. WITHDRAW Amount";
	cout<<"\n\t\t4. Balance Info";
	cout<<"\n\t\t5. All account holder name";
	cout<<"\n\t\t6. Select a account";
	cout<<"\n\t\t7. Updatet a account";
	cout<<"\n\t\t8. exit";
	cout<<"\n\n\t\tSelect option 1-8 : ";
	cin>>ch;

    switch (ch)
    {
    case '1':
        create_bank_acc();
        break;
    case '2':
        system("CLS");
        cout<<"\n\tEnter account no: "<<number;
        money_depo_withdraw(number,1);
        break;
    case '3':
        system("CLS");
        cout<<"\n\tEnter account no: "<<number;
        money_depo_withdraw(number,2);
        break;
    case '4':
        system("CLS");
        cout<<"\n\tEnter account no: "<<number;
        display_slip(number);
        break;
    case '5':
        display_all();
        break;
    case '6':
        system("CLS");
        cout<<"\n\tEnter account no: "<<number;
        rm_bank_acc(number);
        break;
    case '7':
        system("CLS");
        cout<<"\n\tEnter account no: "<<number;
        update_bank_acc(number);
    case '8':
        system("CLS");
        cout<<"\n\tEnjoy";
        break;
    default:
        cout<<"\a";
        break;
    }
    cin.ignore();
    cin.get();

    }
    while(ch!='8');
    //loop end
    return 0;
}





