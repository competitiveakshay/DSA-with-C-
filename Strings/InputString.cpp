#include<iostream>

using namespace std;

int main(){
    string str;

    cout<<"Enter your input string: ";
    getline(cin, str);

    cout<<"Output String: "<<str<<endl;

    cout<<"Length of string is: "<<str.length();

    return 0;
}