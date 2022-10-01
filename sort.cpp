#include <iostream>
using namespace std;

class Insertion_sort{

    public:

    void insertion_sort(){

        int size,i,step,numberOfElements,key,arr[100];
        cout<<"------Insertion sort------\n";
        cout<<"Enter number of elements: ";
        cin>>numberOfElements;
        cout<<"\n\tEnter your elements:\t";
        for(i=1;i<=numberOfElements;i++){
            cin>>arr[i];
        }
        arr[0]=0;
        for(size=2;size<=numberOfElements;size++){
            key=arr[size];
            step=size-1;
            while(key<arr[step]){
                arr[step+1]=arr[step];
                --step;
            }
            arr[step+1]=key;
        }
        cout<<"\tafter sorting:\t\t";
        for(i=1;i<=numberOfElements;i++){
            cout<<arr[i]<<" ";
        }

    }
};   

class Selection_sort{
    
    public:

    void selection_sort(){
        int i,numberOFelements,step,size,minimun,location,key,array[100];
        cout<<"------Selection Sort------\n";
        cout<<"Enter the number of elements: ";
        cin>>numberOFelements;
        cout<<"\n\tEnter your elements:\t";
        for(i=1;i<=numberOFelements;i++){
            cin>>array[i];
        }
        for(step=1;step<=numberOFelements;step++){
            minimun=array[step];
            location=step;

            for(int j=step+1;j<=numberOFelements;j++){
                if(minimun>array[j]){
                    minimun=array[j];
                    location=j;
                }
            }
            key=array[step];
            array[step]=array[location];
            array[location]=key;
        }
        cout<<"\tafter sorting:\t\t";
        for(i=1;i<=numberOFelements;i++){
            cout<<array[i]<<" ";
        }
    }

};

class Quick_Sort{
    public:

    int quick_sort(int array[],int begin,int end){
        int step=begin;
        int pivot=array[begin];
        int location;

        

    }
};

void insertionSort(){
    Insertion_sort insert;
    insert.insertion_sort();
}

void selectionSort(){
    Selection_sort select;
    select.selection_sort();
}


int main(){
    int algo;
    cout<<"Enter number to select algorithm :"<<endl;
    cout<<"Enter 1 for Insertion sort :"<<endl;
    cout<<"Enter 2 for selection sort :"<<endl;
    cin>>algo;
    switch (algo)
    {
    case 1:
        insertionSort();
        break;
    case 2:
        selectionSort();
        break;
    default:
        cout<<"invalid key";
        break;
    }
    return 0;
}
