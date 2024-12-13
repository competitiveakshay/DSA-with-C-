#include<iostream>
using namespace std;

void func(int n){
    cout<<n<<" ";
    if(n >= 3){
        return;
    }
    func(n+1);
    func(n+2);
}

int main(){
    func(0);
    return 0;
}