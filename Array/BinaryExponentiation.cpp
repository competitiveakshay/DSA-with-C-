#include<iostream>
using namespace std;

int binaryExponentiation(int x, int n){
    int binForm = n;
    int ans = 1;
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }

    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;

        binForm /= 2;
    }

    
    return ans;
}

int main(){

    int x = 3, n = 5;

    cout<<binaryExponentiation(x,n);

    return 0;
}