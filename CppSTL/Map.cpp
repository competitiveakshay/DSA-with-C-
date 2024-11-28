#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string, int> m;

    m["TV"] = 100;
    m["Laptop"] = 100;
    m["Headphones"] = 100;

    for(auto val : m){
        cout<<val.first<<" "<<val.second<<endl;
    }

    return 0;
}