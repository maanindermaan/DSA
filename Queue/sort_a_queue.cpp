#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    stack<int>s;
    q.push(6);
    q.push(5);
    q.push(4);

    cout<<q.front();
    int val = q.front();
    q.pop();
    s.push(val);

    val = q.front();
    q.pop();
    s.push(val);

    val = q.front();
    q.pop();
    s.push(val);

    int val1 = s.top();
    s.pop();
    q.push(val1);

    s.top();
    s.pop();
    q.push(val1);

    s.top();
    s.pop();
    q.push(val1);

    cout<<q.front()<<endl;
return 0;
}