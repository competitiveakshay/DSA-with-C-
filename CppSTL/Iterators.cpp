#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {10, 20, 30, 40, 50};

    vector<int>::iterator it;

    for(it = vec.begin(); it != vec.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    vector<int>::reverse_iterator rit;

    for(rit = vec.rbegin(); rit != vec.rend(); rit++){   
        cout<<*(rit)<<" ";
    }
    cout<<endl;

    return 0;
}