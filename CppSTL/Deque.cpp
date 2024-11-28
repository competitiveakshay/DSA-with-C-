#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(32);
    l.push_back(43);
    l.push_front(0);
    l.push_front(-1);

    l.pop_front();

    for(auto val : l){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<l[3]<<endl;

    return 0;
}