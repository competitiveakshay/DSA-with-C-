#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string, int> m;

    m.emplace("TV", 100);
    m.emplace("Computer", 100);
    m.emplace("Mobile", 10);
    m.emplace("Fridge", 200);

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m["Mobile"];

    return 0;
}