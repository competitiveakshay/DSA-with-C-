#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.emplace_back(7);

    vec.pop_back();

    for(int val : vec){
        cout<<val<<" ";
    }

    cout<<"\n";

    vec.push_back(11);

    cout<<"Element at index 3 is: "<<vec.at(3)<<endl;
    cout<<"Element at Front is: "<<vec.front()<<endl;
    cout<<"Element at Back is: "<<vec.back()<<endl;

    vector<int> vec2(5, 10);

    cout<<"Elements of vec2: ";
    for(int val : vec2){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int> vec3(vec2);
    cout<<"vec3 has values of vec2"<<endl;

    for(int val : vec3){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}