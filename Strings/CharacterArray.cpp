#include<iostream>

using namespace std;

int main(){

    // char str[] = {'a', 'b', 'c', '\0'};

    char str[10];

    cout<<"Enter char array: ";
    cin.getline(str, 10, '$');

    for(char ch : str){
        cout<<ch<<" ";
    }

    return 0;
}