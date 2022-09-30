#include <iostream>
using namespace std;

class Insertion_sort{

    public:

    void print_array(int arr[],int size){
        int a;
        cin>>size;
        for(int a=0;a<size;a++){
            cin>>arr[a];
        }
        cout<<arr[a];
    }
    void insetion_sort(int arr[],int size){
        for(int step=1;step<size;step++){
            int key = arr[step];
            int j= step - 1;
            while(key<arr[j] && j>=0){
                arr[j+1]=arr[j];
            }
            arr[j+1]=key;
        }

    }
    
};

int main(){
    int num[10]={1,4,3,2,5,7,9,8,10};
    int size = sizeof(num)/ sizeof(num[0]);
    Insertion_sort insert;
    insert.insetion_sort(num,size);

    cout<<"sorted array ";
    insert.print_array(num,size);
    return 0;
}
