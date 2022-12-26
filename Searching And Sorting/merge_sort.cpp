// Merge Sorting
#include<iostream>
using namespace std;

void merge(int* arr , int s , int e){
    int mid = (s+e)/2;

    // Length of two arrays
    int len1 = mid - s +1;
    int len2 = e - mid;

    // Creating two new arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copying info to these arrays
    int mainArrayIndex = s;
    for(int i=0; i<len1 ; i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i=0; i<len2 ; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // Merging these two new arrays
    int index1 = 0;
    int index2 = 0;
    
    mainArrayIndex = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    // We can also delete allcoated memeory
    delete []first;
    delete []second;
}

void mergeSort(int* arr , int s , int e){
    // Base case
    if(s >= e){
        return;
    }
    int mid = (s+e)/2;
    // Recursive Relation 
    // Sorting first array till mid
    mergeSort(arr , s , mid);
    // Sorting last array 
    mergeSort(arr , mid+1 , e);

    // Merging two arrays
    merge(arr , s , e);
}

int main(){
    int n = 5;
    int arr[5] = {2 , 5, 1, 6 ,9};
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Hello"<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    mergeSort(arr , 0 , n-1);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
