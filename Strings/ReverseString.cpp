#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string str = "Akshay Gaur";
    cout<<"Original String: "<<str<<endl;

    reverse(str.begin(), str.end());
    cout<<"Reverse String: "<<str<<endl;

    return 0;
}