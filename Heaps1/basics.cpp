#include<iostream>
#include<queue>//Using this we can use priority QUEUE
using namespace std;


// INSERTION OF HEAP !
class heap{
    public: 
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index>1){

            int parent = index/2;
            
            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1 ; i<=size ; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deleteFromHeap(){
        if(size == 0 ){
            cout<<"Nothing to delete !! bhen ke takke !"<<endl;
            return;
        }

        // step 1 : Putting last index into first index and delete last index
        arr[1] = arr[size];

        // step 2 : remove last element!
        size--;

        // step 3 : Take it to the right position 
        int i = 1;

        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i + 1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[leftIndex] , arr[i]);
                i = leftIndex;
            }

            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[rightIndex] , arr[i]);
                i = rightIndex;
            }

            else{
                return;
            }
        }
    }
};

void heapify (int arr[], int n, int i) {

    int largest = i;
    int left = 2*i ;
    int right = 2*i + 1;

    if ( left <= n && arr [largest] < arr [left]) {//<= because we start from position 1
        largest = left;
    }

    if(right <= n && arr [largest] < arr[right]) {
        largest = right;
    }

    if(largest != i) {
        swap (arr [largest], arr[i]);
        heapify(arr, n, largest);
    }
}



void heapSort(int arr[] , int n){
    int size = n;
    while(size>1){
        // Step 1
        swap(arr[size] , arr[1]);
        size--;

        // Step 2
        heapify(arr , size , 1);
    }
}




int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.deleteFromHeap();
    h.deleteFromHeap();
    h.deleteFromHeap();
    // h.deleteFromHeap();
    h.deleteFromHeap();
    h.print();

    cout<<endl;
    cout<<endl;
    cout<<endl;

    int arr[6] = {-1 , 54 , 53 , 55 , 52 , 50};
    int n = 5;
    for(int i = n/2 ; i>0 ; i--){
        heapify(arr , n , i);
    }
    cout<<"Now printing the required array !"<<endl;
    cout<<"{ ";
    for(int i=1 ; i< n ; i++){ 
        cout<<arr[i]<<" ";
    }cout<<"}";

    heapSort(arr , n);
    cout<<"Now printing the required array after sorting !"<<endl;
    cout<<"{ ";
    for(int i=1 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }cout<<"}";

    cout<<endl;
    cout<<"Using priority QUEUE"<<endl;
    // MAXHEAP

    priority_queue<int>pq;

    pq.push(10);
    pq.push(4);
    pq.push(5);
    pq.push(20);

    cout<<"Element at top ! "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element at top ! "<<pq.top()<<endl;
    cout<<"Size"<<pq.size()<<endl;
    
return 0;
}
