#include <iostream>
using namespace std;
//declaring array in a function as a parameter
void arr_function(int arr[6],int i, int element){
    cout<<"Enter 5 Array Elements: ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    arr[i] = elem;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<6; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
int main(){
    //cin>>x;
    //int number[];//={1,5,3,2,5};
    arr_function(0,0,0);
    return 0;
}