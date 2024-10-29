#include<iostream>
using namespace std;

int maxProfit(int price[], int mp, int bestBuy, int n){
    for(int i = 1; i<n; i++){
        if(price[i] > bestBuy){
            mp = max(mp, price[i]-bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }
    return mp;
}

int main(){
    int price[] = {7,1,5,3,6,4};
    int n = sizeof(price)/sizeof(int);

    int mp = 0, bestBuy = price[0];

    cout<<maxProfit(price, mp, bestBuy, n);

    return 0;
}