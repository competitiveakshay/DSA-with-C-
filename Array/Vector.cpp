#include<iostream>
#include<vector>
using namespace std;

int main(){

    // initialising a vector
    // vector<int> vec;

    // assigning values
    vector<int> vec={1,2,3,4,5};

    cout<<"size: "<<vec.size()<<endl;
    vec.push_back(6);
    cout<<"size after push_back: "<<vec.size()<<endl;

    vec.pop_back();
    cout<<"size after pop_back: "<<vec.size()<<endl;

    cout<<"Front value: "<<vec.front()<<endl;
    cout<<"Last value: "<<vec.back()<<endl;

    cout<<"Value at index 1: "<<vec.at(1)<<endl;

    cout<<"Capacity: "<<vec.capacity()<<endl;


    // (size of array, value at every index)
    // vector<int> vec(5,1);
    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}