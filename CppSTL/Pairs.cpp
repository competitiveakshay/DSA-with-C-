#include<iostream>
#include<vector>

using namespace std;

int main(){
    pair<string, int> pair1 = {"Akshay Gaur", 22};

    cout<<pair1.first<<endl;
    cout<<pair1.second<<endl;

    vector<pair<int, int>> vec;

    vec.push_back({1,2});
    vec.push_back({2,3});
    vec.push_back({3,4});

    vec.emplace_back(4,5);

    for(auto val : vec){
        cout<<val.first<<" "<<val.second<<endl;
    }

    return 0;
}