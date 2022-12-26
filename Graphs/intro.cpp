#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template<typename T>//Making generic code for all data types


class graph{
    public:
    unordered_map<T,list<T>> adj;
    
    
    void addEdge(int u , int v , bool direction){
        // If d = 0 then undirected
        // If d = 1 the directed


        // Adding edge
        adj[u].push_back(v);


        // checking for directed and undirected
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void printEdge(){
        for(auto i: adj){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j<<" , ";
            }cout<<endl;
        }
    }
};
int main(){
    int n ;
    cout<<"Enter number of nodes : "<<endl;
    cin>>n;

    int m;
    cout<<"Enter number of edges : "<<endl;
    cin>>m;

    graph<int> g;// Declaring type of data 
    
    for(int i=0 ; i<m ; i++){
        int u , v;
        cin>>u>>v;
        // Creating a undirecrted graph
        g.addEdge(u , v , 0);
    }

    // Pirnting 
    g.printEdge();
return 0;
}