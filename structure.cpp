#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;

int main(){

    struct Student
    {
        char name[30],father[30],address[30];
        int birthdate, birth_month, birth_year,phone;
    };
    Student s, student[50];
    cout<<"enter name: ";
    cin>>s.name;
    cout<<"enter phone";
    cin>>student[10].phone;
    cout<<s.name<<student[10].phone;
    return 0
}