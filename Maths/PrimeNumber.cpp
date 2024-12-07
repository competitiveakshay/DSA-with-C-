#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return "Number is not Prime";
        }
    }
    return "Number is Prime";
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    cout<<isPrime(n)<<endl;

    return 0;
}