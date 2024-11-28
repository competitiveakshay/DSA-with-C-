#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> q;

    q.push(10);
    q.push(4);
    q.push(5);
    q.push(3);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

    return 0;
}