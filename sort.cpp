#include <iostream>
#include <vector>
#include <string>

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

class Bubble_sort{
    public:

    void bubble_sort(vector<int> &a){
        int i,j,size,k,swap;

        for(i=a.size();i>0;i++){
            for(j=0,k=1;k<i;j++,k++){
                if(a[j]>a[k]){
                    swap=a[j];
                    a[j]=a[k];
                    a[k]=swap;
                }
            }
        }
    }
};

class DepthFirstSearch{
    
    public:

    void dfs(){
        int cost[100][100],stack[100],visited[100],visit[100],i,j,v,k,vertex,root,edge;
        cout<<"------Depth First Search------";
        cout<<"\n\tEnter the number's of Vertex:\t";
        cin>>vertex;
        cout<<"\n\tEnter the number's of edge:\t";
        cin>>edge;

        cout<<"\n\tEdges\n\t";
        for(k=1;k<=edge;k++){
            cin>>i>>j;
            cost[i][j]=1;
        }

        cout<<"\nEnter Initial Vertex: ";
        cin>>v;
        cout<<"\n\tOrder of visited nodes is :\t";
        cout<<v<<" ";

        visited[v]=1;
        k=1;

        while( k < vertex){
            for(j = vertex; j>=1; j--){
                if(cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1){
                    visit[j]=1;
                    stack[root]=j;
                    root++;
                }
            }
            v= stack[-root];
            cout<<v<<" ";
            k++;
            visit[v]=0;
            visited[v]=1;        

        }

    }
};

void depthFirstSearch(){
    DepthFirstSearch d;
    d.dfs();
}

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
    cout<<"Enter the number of elements: ";
    cin>>numberOfelements;
    cout<<"\n\tEnter your elements:\t";
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

void bubbleSort(){
    int numberOFelements,value;
    vector<int>a;

    cout<<"------Bubble sort------\n";
    cout<<"Enter the number of elements: ";
    cin>>numberOFelements;
    cout<<"\n\tEnter your elements:\t";
    for (int  i = 0; i < numberOFelements; i++)
    {
        cin>>value;
        a.push_back(value);
    }
    Bubble_sort bubble;
    bubble.bubble_sort(a);

    cout<<"\tafter sorting:\t\t";
        for(int i=0;i<=numberOFelements;i++){
            cout<<a[i]<<" ";
        }    

}

class PrimeNumber{

    public:

    void primeNumber(){
        int number,cout=0;
        //cout<<""<<endl;
        cin>>number;
        if(cout==2){
            //cout<<"Its prime\n";
        }
    }
};

void prime_number(){
    PrimeNumber prime;
    prime.primeNumber();
}

int main(){
    int algo;
    cout<<"Enter number to select algorithm :"<<endl;
    cout<<"Enter 1 for Insertion sort :"<<endl;
    cout<<"Enter 2 for selection sort :"<<endl;
    cout<<"Enter 3 for quick Sort     :"<<endl;
    cout<<"Enter 4 for bubble sort    :"<<endl;
    cout<<"Enter 5 for DFS            :"<<endl;
    cin>>algo;
    switch (algo)
    {
    case 1:
        insertionSort();
        break;
    case 2:
        selectionSort();
        break;
    case 3:
        quickSort();
        break;
    case 4:
        bubbleSort();
        break;
    case 5:
        depthFirstSearch();
        break;
    default:
        cout<<"invalid key";
        break;
    }
    return 0;
}
