#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string, int> m;

    m["Watch"] = 50;
    m["TV"] = 100;
    m["Laptop"] = 100;
    m["Headphones"] = 100;
    m["Tablet"] = 120;

    m.emplace("Camera", 40);

    for(auto val : m){
        cout<<val.first<<" "<<val.second<<endl;
    }

    return 0;
}