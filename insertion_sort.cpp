#include <iostream>
using namespace std;

class Insertion_sort{

    public:

    void print_array(int arr[],int size){
        //int a;
        //cin>>size;
        for(int a=0;a<size;a++){
            //cin>>arr[a];
            cout<<arr[a]<<" ";
        }
        cout<<endl;
    }
    void insetion_sort(int arr[],int size){

        for(int step=1;step<size;step++){
            int key = arr[step];
            int j= step - 1;
            while(key<arr[j] && j>=0){
                arr[j+1]=arr[j];
                --j;
            }
            arr[j+1]=key;
        }

    }
    
};
void insertionSort(){
    int num[10]={1,4,3,2,5,7,9,8,10};
    int size = sizeof(num)/ sizeof(num[0]);
    Insertion_sort insert;
    insert.insetion_sort(num,size);

    cout<<"sorted array ";
    insert.print_array(num,size);
}
void selectionSort(){
    cout<<"not written yet"<<endl;
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
