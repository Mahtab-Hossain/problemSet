#include <iostream>
using namespace std;

class Techer{
    private:
      int student;
    public:
      void numbmer_of_student(int stdn){
        student = stdn;
        cout<<"enter the number of a student: ";
        cin>>stdn;
    }
    int number_of_class(){
        return student;
    }

};
int main(){
    Techer obj;
    obj.numbmer_of_student(0);
    //cout<<obj.numbmer_of_student(0);
    cout<<"";
    cout<<obj.number_of_class();

    return 0;
}