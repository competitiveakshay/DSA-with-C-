#include<iostream>
using namespace std;

int main(){
    int n = 8;
    int arr[n] = {1,2,0,4,3,0,5,0};
    int temp[n];
    int tempIndex = 0;

    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            temp[tempIndex] = arr[i];
            tempIndex++;
        }
    }

    while(tempIndex < n){
        temp[tempIndex] = 0;
        tempIndex++;
    }

    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }

    return 0;
}