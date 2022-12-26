// MAPS
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int , string> m;
    m[1] = " Astha ";//1 is key and astha is value(soul of maan);
    m[2] = "love";
    m[3] = "MAAN";
    // m.insert( {5 , "MAAN"} );
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding 3 -> "<<m.count(3)<<endl;
return 0;
}


// bool detectLoop(Node* head){
//     if(head == NULL){
//         return false;
//     }
//     map<Node* , bool> visited;
//     Node* temp = head;
//     while(temp!=NULL){
//         // cycle is present
//         if(visited[temp] == true){
//             cout<<"Present at element !"<<temp->data<<endl;
//             return true;
//         }
//         visited[temp] = true;
//         temp = temp->next;
//     }
//     return false;
// }
