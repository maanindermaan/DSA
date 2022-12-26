#include<iostream>
using namespace std;

int binarySearch(int arr[], int size , int key ){
    int start = 0;
    int end = size-1;

    // int mid = (start+end)/2;
    int mid = start + ((end-start)/2);
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        // going to right wala part
        if(key>arr[mid]){
            start = mid+1;

        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {7,8,9,10,11};

    cout<<"Index of key is :->"<<binarySearch(odd,5,11);
return 0;
}
