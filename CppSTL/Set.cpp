#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;

    // Print in sorted form
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(6);

    // Ignore duplicates
    s.insert(2);
    s.insert(3);

    cout<<"Size of Set is "<<s.size()<<endl;
    cout<<"Lower Bound = "<<*(s.lower_bound(4))<<endl;
    cout<<"Upper Bound = "<<*(s.upper_bound(4))<<endl;

    for(auto val : s){
        cout<<val<<" ";
    }

    return 0;
}