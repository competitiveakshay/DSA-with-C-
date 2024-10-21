#include<climits>
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int currentSum = 0 , maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if(currentSum<0)
        currentSum = 0;
    }

    cout<<"Maximum SubArray Sum: "<<maxSum;
    return 0;
}