#include<iostream>
#include<cmath>

using namespace std;

int digits(int n){
    while(n != 0){
        int digit = n%10;
        cout<<digit<<" ";
        n = n/10;
    }
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    digits(n);
    cout<<endl;

    // -----Shortcut to find the count of digits in a number-----
    cout<<(int)(log10(n) + 1);
    
    return 0;
}