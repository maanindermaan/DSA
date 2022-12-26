#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    // Creation 
    unordered_map<string , int> m;

    // Insertion
    // 1st method
    pair<string , int> p = make_pair("chutiya" , 1);
    m.insert(p);

    // 2nd method
    pair<string , int> p2("love" , 1);
    m.insert(p2);

    // 3rd Method
    m["mera"]=1;
    
    // Here the value will be updated only
    m["mera"]=2;


    // SEARCH
    cout<<m["mera"]<<endl;
    cout<<m.at("chutiya")<<endl;

    // for size
    cout<<m.size()<<endl;

    // for checking presence
    cout<<m.count("chutiya")<<endl;


    // ERASE
    // m.erase("mera");
    cout<<m.size()<<endl;


    // FOR TRAVERSING
    // 1
    for(auto i:m){
        cout<<i.first <<"   "<<i.second<<endl;
    }

    // 2
    unordered_map<string , int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<"   "<<it->second<<endl;
        it++;
    }


    // iska random order print hota hai lekin agar aap map use karle instead of unordered then its preserved
return 0;
}