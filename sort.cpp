#include <iostream>
using namespace std;

class Insertion_sort{

    public:

    void insertion_sort(){

        int size,i,step,numberOfElements,key,arr[100];
        cout<<"------Insertion sort------\n";
        cout<<"Enter number of elements: ";
        cin>>numberOfElements;
        cout<<"\n\tEnter your elements: \n\t";
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
        cout<<"after sorting:\t";
        for(i=1;i<=numberOfElements;i++){
            cout<<arr[i]<<endl;
        }

    }
};   

void insertionSort(){
    //int num[10]={1,4,3,2,5,7,9,8,10};
    //int size = sizeof(num)/ sizeof(num[0]);
    //Insertion_sort insert;
    //insert.insetion_sort(num,size);
    //cout<<"sorted array ";
    //insert.print_array(num,size);
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
        //selectionSort();
        break;
    default:
        cout<<"invalid key";
        break;
    }
    return 0;
}
