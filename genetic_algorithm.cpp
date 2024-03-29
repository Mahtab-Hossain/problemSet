#include <bits/stdc++.h>
using namespace std;
#define POPULATION 100
const string GENES = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ 1234567890, .-;:_!\"#%&/()=?@${[]}";

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

string make_gnome(){
    int length,i;
    string gnome = "";
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
    Single mate(Single parent_2);

};

Single::Single(string chromosom){
    
    this->chromosom = chromosom;
    fitness = cal_fitness();
};

Single Single::mate(Single par_2){
    string infant = "";
    int length,i;
    length = chromosom.size();
    for(i = 0;i<length;i++){
        //here p = probability
        float p = random_number(0,100)/100;

        if(p<0.45){
            infant += infant[i];
        }
        else if(p<0.90){
            infant += par_2.chromosom[i];
        }
        else{
            infant += mutation();
        }
    }
    return Single(infant);
};

int Single::cal_fitness(){
    int length,fitness=0,i;
    length=AIM.size();
    for(i=0;i<length;i++){}
    if(chromosom[i] != AIM[i]){
        fitness++;
    }
    return fitness;

}
//overloading function

bool operator<(const Single &sing1,const Single &sing2){
    return sing1.fitness <sing2.fitness;
}


int main(){
    srand((unsigned)(time(0)));
    int generation=0;
    
    vector<Single> population;
    bool found = false;
    for(int i = 0;i< POPULATION;i++){
        string gnome = make_gnome();
        population.push_back(Single(gnome));
    }
    while(! found){
        sort(population.begin(),population.end());
        if(population[0].fitness<=0){
            found = true;
            break;
        }
        vector<Single> new_gen;
        int s = (10*POPULATION)/100;
        for(int i=0;i<s;i++){
            new_gen.push_back(population[i]);
        }
        s = (90*POPULATION)/100;
        for (int i = 0; i < s; i++)
        {
            int r,len = population.size();
            r=random_number(0,50);
            Single parent1 = population[r];
            
            r = random_number(0,50);
            Single parent_2 = population[r];
            Single offSpring = parent1.mate(parent_2);
            new_gen.push_back(offSpring);

        }
        population = new_gen;
        cout<<"Generation: "<<generation<<"\t";
        cout<<"String: "<<population[0].chromosom<<"\t";
        cout<<"Fitness: "<<population[0].fitness<<"\n";
        generation++;
    }
    
    cout<< "Generation: " << generation << "\t";
    cout<< "String: "<< population[0].chromosom <<"\t";
    cout<< "Fitness: "<< population[0].fitness << "\n";
    
}