#include <bits/stdc++.h>
#define POPULATION 100

using namespace std;

const string GENES = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ 1234567890, .-;:_!#%&/()=?@${[]}";

const string AIM = "first evaluation";
//here s = start and e = end
int random_number(int s, int e){
    int range,random_n;
    range=(e-s)+1;
    random_n=s+(rand()%range);
    return random_n;
}
//the below function is used for metaphorical mutation

char mutation(){
    int length,rand;
    length=GENES.size();
    rand=random_number(0,length-1);
    return GENES[rand];
}

//string of genes function

string gnome(){
    int length,i;
    string gnome = " ";
    length = AIM.size();
    for ( i = 0; i < length; i++)
    {
        gnome += mutation();
        
    }
    return gnome;
}
class Single{
    public:
    string chromosom;
    int fitness, cal_fitness();
    Single(string chromosom);
    Single mate(Single paraent_2);

};

int main(){

    
}