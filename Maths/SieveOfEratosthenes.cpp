#include<iostream>
#include<vector>

using namespace std;

int countNumbers(int n){
    vector<bool> isPrime(n+1,  true);
    int count = 0;

    for(int i=2; i<n; i++){
        if(isPrime[i]){
            cout<<i<<" ";
            count++;
        }
        for(int j=i*2; j<n; j=j+i){
            isPrime[j] = false;
        }
    }
    cout<<endl;
    return count;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<countNumbers(n);

    return 0;
}