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
        for(location=begin+1;location<=end;location++){
            if(pivot > array[location]){
                array[step]=array[location];
                array[location]=array[step+1];
                array[step+1]=pivot;
                step++;
            }
        }
        return step;
    }
    void qSort(int array[],int begin,int end){
        if(begin < end){
            int step=quick_sort(array,begin,end);
            qSort(array,begin,step-1);
            qSort(array,step+1,end);
        }
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
void quickSort(){
    int array[100],i,numberOfelements,begin,end;
    cout<<"------Quick sort------\n";
    cout<<"\n\tEnter your elements:\t";
    cin>>numberOfelements;
    for(i=1;i<=numberOfelements;i++){
        cin>>array[i];
    }
    begin=1;
    end=numberOfelements;

    Quick_Sort q;
    q.qSort(array,begin,end);
    
    cout<<"\n\tafter sorting:\t\t";
    for(i=1;i<=numberOfelements;i++){
        cout<<array[i]<<" ";

    }
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
