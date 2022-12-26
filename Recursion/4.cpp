// Reach home code
#include<iostream>
using namespace std;

void reachHome(int src , int dest){
    cout<<"Source "<<src<<" Destination "<<dest<<endl;
    // Base case 
    if(src == dest){
        cout<<"POCH GYA BHADWE!"<<endl;
        return;
    }
    // Processing step
    src++;
    // Recursive Call
    reachHome(src , dest);
}

int main(){
    int dest = 20;
    int src = 1;

    reachHome(src , dest);
return 0;
}