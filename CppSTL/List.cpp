#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(0);
    l.push_front(-1);

    l.pop_front();

    for(auto val : l){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}