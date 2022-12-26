// Fibbonacci Series
#include<iostream>
using namespace std;

int fibbonacci(int n){
    // Base cases
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    // Recursive case
    return (fibbonacci(n-1)+fibbonacci(n-2));
}

int main(){
    int n;
    cout<<"Enter the value of n to get nth term"<<endl;
    cin>>n;
    int ans = fibbonacci(n);

    cout<<ans<<endl;
return 0;
}