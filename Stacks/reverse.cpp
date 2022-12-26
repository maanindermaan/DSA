// Reversing a stack
#include<iostream>
#include<stack>
using namespace std;
int main(){

    string str = "SHIVANI";

    stack<char> s;

    for(int i = 0 ; i<str.length() ; i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = " ";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);//Adds value to the end of stack or aaray 
        s.pop();
    }
    cout<<"My reversed string is ! "<<ans<<endl;
return 0;
}